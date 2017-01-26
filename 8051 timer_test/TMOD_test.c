#include <reg51.h>
sbit pin = P2^0;
void delay1ms(unsigned int i)
{     
	int c=0;
	while (c<i)
	{
		TMOD=0x01;
		TH0=0xFC;
		TL0=0x66;
		TR0= 1;
		c++;
		while(!TF0);
		TR0=0;
	  TF0=0;
	}						
  
}
void main()
{
	while(1)
	{
		pin = 1;
		delay1ms(1000);
		pin = 0;
		delay1ms(1000);
	}
                 
}