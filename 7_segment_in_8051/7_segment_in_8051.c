#include <regx51.h>
void delay1ms(unsigned int i)
{ 
	int c=0;
	while(c<i)
	{
		TMOD=0x01;
		TH0=0xFC;
		TL0=0x66;
		TR0= 1;
		while(!TF0);
							TR0=0;
							TF0=0;
		          c++;
							 
	}
}
void main()
{
	P1=0x00;
	while(1)
	{
		P1=0x3F;
		delay1ms(1000);
		P1=0x06;
		delay1ms(1000);
		P1=0x5B;
		delay1ms(1000);
		P1=0x4F;
		delay1ms(1000);
		P1=0xE6;
		delay1ms(1000);
		P1=0xED;
		delay1ms(1000);
		P1=0xFD;
		delay1ms(1000);
		P1=0x07;
		delay1ms(1000);
		P1=0x7F;
		delay1ms(1000);
		P1=0x6F;
		delay1ms(1000);
	}
}