#include <reg51.h>
#include <stdio.h>
#include "intrins.h"
sbit SWT1 = P2^0;
sbit SWT2 = P2^1;
sbit servo_pin = P2^2;
void delay_us(unsigned int us);
int pos = 0;
int i,j;

void main()
{
while(1)
{ 
	SWT1 = 0;
	SWT2 = 0;
  if(SWT1 == 1)
	{
	 servo_pin = 1;
	 delay_us(152);
	 servo_pin = 0;	 
	}
	if(SWT2 == 1)
	{	
   servo_pin =1;
	 delay_us(50);
	 servo_pin = 0;	  	
	}
}	
}

void delay_us(unsigned int us)
{
	while(us--)
	{
		_nop_;
	}
}