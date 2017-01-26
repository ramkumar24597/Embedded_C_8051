#include <reg51.h>
#define output P1
void init_adc();
void init_lcd();
void lcdclr(unsigned char);
double adc();
void lcd_disp(unsigned char);
void lcd_data(unsigned char);
void delay_ms(unsigned int);
// ADC
sbit cs = P3^3;
sbit rd = P3^7;
sbit wr = P3^6;
sbit eoc = P0^4;
//LCD
sbit rs = P3^0;
sbit wt = P3^1;
sbit e =  P3^2;
double input;
void main()
{
	while (1)
	{
		init_adc();
		input = adc();
		init_lcd();
		lcd_disp(input);	
    delay_ms(500);		
	}
}
void lcd_disp(unsigned char num)
{
	unsigned char first = 0;
	unsigned char second =0;
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


