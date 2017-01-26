#include <reg51.h>
sbit LEDY = P1^0;
sbit LEDR = P1^1;
sbit LEDG = P1^2;
sbit LEDB = P1^3;
sbit SWTY = P0^0;
sbit SWTR = P0^1;
sbit SWTG = P0^2;
sbit SWTB = P0^3;
void delay(int);
void main(void)
{
	LEDY = 1;
	LEDR = 1;
	LEDG = 1;
	LEDB = 1;
	SWTY = 1;
	SWTR = 1;
	SWTG = 1;
	SWTB = 1;
		if(SWTY == 0)
		{
			LEDY = 0;
			delay(50000);
			
		}
		if(SWTR == 0)
		{
			LEDR = 0;
			delay(50000);
		}
		if(SWTG == 0)
		{
			LEDG = 0;
		  delay(50000);
		}
		if(SWTB == 0)
		{
			LEDB = 0;
			delay(50000);
		}
	
	
}
void delay(int k)
{
	int j,i;
	for(i=0;i<k;i++)
	{
		for(j=0;j<100;j++)
		{
		}
	}
}