#include <reg2051.h>
 void delay_ms(unsigned int ms_count);
 void delay_us(unsigned int us_count);
#define RGB P3                             //   Port 3 in 8bit mode declaration
sbit red = P3^0;
sbit green = P3^1;
sbit blue = P3^2;
sbit SW1 = P1^0;                           // Multiple color
sbit SW2 = P1^1;                           // Yellow Color
sbit SW3 = P1^2;                           // Cyan Color
sbit SW4 = P1^3;                           // Magenta Color
void delay_sec(unsigned char sec_count)
 {
     while(sec_count!=0)
      {
         delay_ms(1000);    //1sec delay
         sec_count--;
        }
 }
 void delay_ms(unsigned int ms_count)
 {
        while(ms_count!=0)
         {
            delay_us(112);   //1ms delay
             ms_count--;
            }
   }
void delay_us(unsigned int us_count)
 {  
    while(us_count!=0)
      {
         us_count--;
       }
   }	 
void main()
{
red =1;
green=1;
blue=1;
SW1=1;
SW2=1;
SW3=1;
SW4=1;

red =0; // red led on state
delay_sec(3);
red=1;
delay_sec(3);	
	
green=0;//green led on state 
delay_sec(3);
green=1;
delay_sec(3);

blue=0;;//blue led on state 
delay_sec(3);
blue=1;
delay_sec(3);	

while(1)
{
unsigned int x=0,y=1500,z=0;
if(SW1 == 0)                        // Multiple Color
{
y=y;z=z;
while(y!=0)//red gree ON
{
z=z+10;
y=y-10;
RGB=0xf8;  
delay_us(y);
RGB=0xfc;    
delay_us(z);
}  
y=y;z=z;
while(z!=0)//red blue ON
{
z=z-10;
y=y+10;
RGB=0xf8;  
delay_us(y);
RGB=0xfa;   
delay_us(z);
}
y=y;z=z;
while(y!=0)//blue gree ON
{
z=z+10;
y=y-10;
RGB=0xf8;  
delay_us(y);
RGB=0xf9;    
delay_us(z);
}  
y=y;z=z;
while(z!=0)//RED ON BLUE GREEN CHANGES
{
z=z-10;
y=y+10;
RGB=0xf8;  
delay_us(y);
RGB=0xfe;    
delay_us(z);
}  
y=y;z=z;	
while(z!=0)//GREEN ON BLUE RED CHANGES
{
z=z-10;
y=y+10;
RGB=0xf8;  
delay_us(y);
RGB=0xfd;    
delay_us(z);
}  
y=y;z=z;	 
while(z!=0)//BLUE ON RED GREEN CHANGES
{
z=z-10;
y=y+10;
RGB=0xf8;  
delay_us(y);
RGB=0xfb;    
delay_us(z);
}  
RGB=0xff;
y=y;z=z;
}
if(SW2 == 0)                 //   Yellow Color 
{
red=0; 
green=0;
delay_sec(3);
red=1;
green=1;
delay_sec(1);
}
if(SW3 == 0)                //     Cyan Color
{
blue=0;
green=0; 
delay_sec(3);
blue=1;
green=1;
delay_sec(1);	
}
if(SW4 == 0)                //     Megenta Color 
{
red=0;
blue=0;
delay_sec(3);
red=1;
blue=1;
delay_sec(1);	
}

}
}











