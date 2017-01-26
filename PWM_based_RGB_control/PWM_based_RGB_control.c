#include <reg2051.h>
sbit red=P3^0;
sbit green=P3^1;
sbit blue=P3^2;
unsigned int i=0;
void Pwm_Low(unsigned int n) // turn off green and blue 
{
green=1;
blue=1;
while(i<n)
{	
TH0=0xF8;
TL0=0xCC;
TR0=1;       
while(!TF0); 
TF0=0;       
TR0=0;
i++;
}	
}
void Pwm_Low1(unsigned int n) //turn off red
{
red=1;
green=1;
blue=1;	
while(i<n)
{
TH0=0xF8;
TL0=0xCC;
TR0=1;      
while(!TF0); 
TF0=0;      
TR0=0;
i++;	
}
}
void Pwm_High(unsigned int n) // turn on red,green,and blue
{
while(i<n)
{
TH0=0xF8;
TL0=0xCC;
TR0=1;      
while(!TF0); 
TF0=0;      
TR0=0; 
i++;	
}
Pwm_Low(17);
Pwm_Low1(27);	
}
void main()
{
	
P1=0xFF;  
TMOD=0x01; 
while(1)
{
 red=0;
 green=0;
 blue=0;
 Pwm_High(56);
}
}