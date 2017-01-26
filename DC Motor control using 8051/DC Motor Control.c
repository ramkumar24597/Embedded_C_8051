#include <reg51.h>
void delay_ms(unsigned int);
void forward(void);
void backward(void);
void left(void);
void right(void);
void stop(void);

sbit left_backpin = P1^0;
sbit left_frontpin = P1^1;
sbit right_frontpin = P1^2;
sbit right_backpin = P1^3;
sbit left_control= P0^1;
sbit right_control = P0^2;
sbit buzzer = P2^7;

void delay_ms(unsigned int ms)
 {
	 unsigned int x,y;
	 for(x=0;x<ms;x++)
	  for(y=0;y<1000;y++);
 }
 
 void forward(void)
{
 right_frontpin=1;
 left_frontpin=1;
 right_backpin=0;
 left_backpin=0;
}
 void backward(void)
{
 right_frontpin=0;
 left_frontpin=0;
 right_backpin=1;
 left_backpin=1;
	
}
void left(void)
{
 right_frontpin=1;
 left_frontpin=0;
 right_backpin=0;
 left_backpin=1;

}
void right(void)
{

 right_frontpin=0;
 left_frontpin=1;
 right_backpin=1;
 left_backpin=0;

}
void stop(void)
{

 right_frontpin=0;
 left_frontpin=0;
 right_backpin=0;
 left_backpin=0;

}
void main (void)
{

buzzer=1;		  
left_control=1;  
right_control=1;
				 
while(1)
{
buzzer = 1;
delay_ms(2000);	
forward();
delay_ms(2000);
stop();
delay_ms(1000);
backward();
delay_ms(2000);
stop();
delay_ms(1000); 
left();
delay_ms(2000); 
stop();
delay_ms(1000);
right();
delay_ms(2000); 
stop();
delay_ms(2000); 

}
}