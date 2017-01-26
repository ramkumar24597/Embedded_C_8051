 #include <reg2051.h>
 void delay_ms(unsigned int ms_count);
 void delay_us(unsigned int us_count);
#define port1 P3
#define sw P1

void delay_sec(unsigned char sec_count)
 {
 
 
     while(sec_count!=0)
      {
         delay_ms(1000);    //delay_ms is called to generate 1sec delay
         sec_count--;
        }
 }
 void delay_ms(unsigned int ms_count)
 {
        while(ms_count!=0)
         {
            delay_us(112);   //delay_us is called to generate 1ms delay
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
unsigned int x=0,y=1500,z=0;
port1=0x00;// red led on state
port1=0xfe;
delay_sec(3);
port1=0xff;
delay_sec(3);	
	
port1=0xfd;//green led on state 
delay_sec(3);
port1=0xff;
delay_sec(3);

port1=0xfb;//blue led on state 
delay_sec(3);
port1=0xff;
delay_sec(3);	
while(1)
{
switch(sw)
{
case 0xfe:
y=y;z=z;	
while(y!=0)//red ON green change
{
z=z+10;
y=y-10;
port1=0xfc;  
delay_us(y);
port1=0xfe;    
delay_us(z);
}
y=y;z=z;
while(z!=0)//red ON blue change
{
z=z-10;
y=y+10;
port1=0xfa;  
delay_us(y);
port1=0xfe;    
delay_us(z);
}
y=y;z=z;
while(y!=0)//green ON red change
{
z=z+10;
y=y-10;
port1=0xfc;  
delay_us(y);
port1=0xfd;    
delay_us(z);
}
y=y;z=z;
while(z!=0)//green ON blue change
{
z=z-10;
y=y+10;
port1=0xf9;  
delay_us(y);
port1=0xfd;    
delay_us(z);
}
y=y;z=z;
while(y!=0)//blue ON red change
{
z=z+10;
y=y-10;
port1=0xfa;  
delay_us(y);
port1=0xfb;    
delay_us(z);
}
y=y;z=z;
while(z!=0)//blue ON green change
{
z=z-10;
y=y+10;
port1=0xf9;  
delay_us(y);
port1=0xfb;    
delay_us(z);
}
y=y;z=z;
while(y!=0)//red gree ON
{
z=z+10;
y=y-10;
port1=0xf8;  
delay_us(y);
port1=0xfc;    
delay_us(z);
}  
y=y;z=z;
while(z!=0)//red blue ON
{
z=z-10;
y=y+10;
port1=0xf8;  
delay_us(y);
port1=0xfa;   
delay_us(z);
}
y=y;z=z;
while(y!=0)//blue gree ON
{
z=z+10;
y=y-10;
port1=0xf8;  
delay_us(y);
port1=0xf9;    
delay_us(z);
}  
y=y;z=z;
while(z!=0)//RED ON BLUE GREEN CHANGES
{
z=z-10;
y=y+10;
port1=0xf8;  
delay_us(y);
port1=0xfe;    
delay_us(z);
}  
y=y;z=z;	
while(z!=0)//GREEN ON BLUE RED CHANGES
{
z=z-10;
y=y+10;
port1=0xf8;  
delay_us(y);
port1=0xfd;    
delay_us(z);
}  
y=y;z=z;	 
while(z!=0)//BLUE ON RED GREEN CHANGES
{
z=z-10;
y=y+10;
port1=0xf8;  
delay_us(y);
port1=0xfb;    
delay_us(z);
}  
port1=0xff;
y=y;z=z;	 
break;
case 0xfd:
port1=0xfc;//yellow color 
delay_sec(3);
port1=0xff;
delay_sec(1);
break;
case 0xfb:
port1=0xf9;//cyan color 
delay_sec(3);
port1=0xff;
delay_sec(1);	
break;
case 0xf7:
port1=0xfa;//megenta color 
delay_sec(3);
port1=0xff;
delay_sec(3);	
port1=0xff;
delay_sec(1);
break;

}}}









