#include <reg51.h>
void delay_ms(unsigned int k)
{
	unsigned int i,j;
	for(i=0;i<k;i++)
	for(j=0;j<100;j++);
}
void lcd_disp(char *str)
{
	unsigned int k,j;
	unsigned int sd[4] = {0x38,0x0E,0x01,0x80};
	for(k=0;sd[k]!=0;k++)
	{
		P3=0x02;
		P2=sd[k];
		delay_ms(1);
		P3=0x00;
		delay_ms(100);
	}
	for(j=0;str[j]!=0;j++)
	{
		P3=0x03;
		P2=str[j];
		delay_ms(1);
		P3=0x01;
	}
	delay_ms(2);
}
void main(void)
{
	P2=0x00;
	P3=0X00;
	while(1)
	{
		char* input = "Aishu";
		lcd_disp(input);
	}	
}