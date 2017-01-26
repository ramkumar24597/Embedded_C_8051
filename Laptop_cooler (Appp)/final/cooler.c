#include <reg51.h>
#define output P1
#define fans P0
void init_adc();
void init_lcd();
void lcdclr(unsigned char);
double adc();
void lcd_disp(unsigned char);
void lcd_data(unsigned char);
void delay_ms(unsigned int);
// Serial_communication
void serial_speed(unsigned char);
void serial_temp(unsigned char);
void serial_print(unsigned char);
// ADC
sbit cs = P3^3;
sbit rd = P3^7;
sbit wr = P3^6;
sbit eoc = P0^4;
// LCD
sbit rs = P0^6;
sbit wt = P0^7;
sbit e =  P3^2;
double input;
int low;
int pwm = 255;
void main()
{
	int check;
	fans = 0x00;
	while (1)
	{
		
		init_adc();
		input = check = adc();
		init_lcd();
		lcd_disp(input);	
		serial_speed(input);
		serial_temp(input);
    delay_ms(500);
		while ( check == input)
		{
			fans = 0x0F;
			delay_ms(input);
			fans = 0x00;
			low = pwm - input;
			delay_ms(low);
			init_adc();
			check = adc();
		}
	}
}
void serial_speed(unsigned char s)
{
	int g;
	unsigned char x[3];
	unsigned char y[] = "Speed : ";	
	TMOD = 0x20;
	TH1 = 0xFA;
	PCON = 0x80;
	SCON = 0x50;
	TR1 = 1;
	for(g = 0;g<8;g++)
	{
		SBUF = y[g];
		while(TI == 0);
		TI = 0;
	}
	x[0] = s/100;
  x[1] = (s - (x[0]*100))/10;
  x[2] = (s - ((x[0]*100)+(x[1]*10)));
	for(g=0;g<3;g++)
	{
	SBUF = x[g]+0x30;
	while(TI == 0);
	TI = 0;
	}
	serial_print(0x0D);
	return;
}
void serial_temp(unsigned char s)
{
	int g;
	float temp;
	unsigned int x[6];
	unsigned char y[] = "Temperature : ";
	TMOD = 0x20;
	TH1 = 0xFA;
	PCON = 0x80;
	SCON = 0x50;
	TR1 = 1;
	for(g=0;g<14;g++)
	{
		SBUF = y[g];
		while(TI == 0);
		TI = 0;
	}
	temp = (((s*150)/77)*10);
	x[0] = temp/100;
  if(x[0] != 0)
	{
    serial_print(x[0]+0x30);
	}		
  x[1] =  temp - (x[0]*100);
  x[1] = x[1]/10;
	if(x[0] == 0 && x[1] == 0)
	{
		/// if both first and second value tendss to zero we no need to print it
	}
	else
	{
		serial_print(x[1]+0x30);
	  serial_print('.');
	}
	x[2] = temp - ((x[0]*100)+(x[1]*10));
	serial_print(x[2]+0x30);
	serial_print(0xB0);		
	serial_print('C');
	serial_print(0x0D);
  return;
}
void serial_print(unsigned char v)
{
	TMOD = 0x20;
	TH1 = 0xFA;
	PCON = 0x80;
	SCON = 0x50;
	TR1 = 1;
	SBUF = v;
  while(TI == 0);
	TI = 0;
	return;
	
}
void lcd_disp(unsigned char num)
{
	unsigned char first = 0;
	unsigned char second = 0;
	unsigned char third = 0;
  lcdclr(0x0E);
	lcdclr(0x01);
	lcdclr(0x06);
	first = (num/100);
	lcd_data(first+0x30);
	second = (num - (first*100));
	second = (second/10);
	lcd_data(second+0x30);
	third = (num - ((first*100)+(second*10)));
	lcd_data(third+0x30);
}
void init_lcd()
{
	lcdclr(0x0E);
	lcdclr(0x01);
	lcdclr(0x06);
	lcd_data('R');lcd_data('E');lcd_data('A');lcd_data('D');lcd_data('I');lcd_data('N');lcd_data('G');lcd_data(' ');
	delay_ms(200);
	
}
void lcdclr(unsigned char n)
{
	P2 = n;
	rs = 0;
	wt = 0;
	e = 1;
	delay_ms(1);
	e = 0;
}
void lcd_data(unsigned char n)
{
	P2 = n;
	rs = 1;
	wt = 0;
	e = 1;
	delay_ms(1);
	e = 0;
}
void init_adc()
{
	cs = 0;
	rd = 1;
}
double adc()
{
	double temp;
	wr = 0;
	wr = 1;
	while(eoc == 1);
	delay_ms(5);
	rd =0;
	delay_ms(5);
	temp = output;
	return temp;
}
void delay_ms(unsigned int n)
{
	int c =0;
	while(c < n)
	{
		TMOD = 0x01;
		TH0 = 0xFC;
	  TL0 = 0x66;
	  TR0 =1;
		c++;
		while(TF0 == 0);
		TR0 = 0;
		TF0 = 0;
	}
}


