#include <reg51.h>
#define input P1
double newtemp,pass1,pass2;
  //LCD
sbit rs = P0^6;       
sbit rw = P0^7;       
sbit e = P3^2;       
//ADC
sbit rd=P3^7;		   
sbit wr=P3^6;		   
sbit intr=P0^4;	
sbit cs = P3^3;
void delay(unsigned int time)    
{
int c =0;
TMOD = 0x01;
while(c<time)
{
	TH0 = 0xFC;
  TL0 = 0x66;
  TR0 = 1;
  while(TF0 == 0);
  TR0 =0;
  TF0 =0;
  c++;
}
}
double adc()  
{
double temp;
cs =0;
rd = 1;
wr = 0;
delay(5);
wr = 1;
while(intr == 1);
rd = 0;
delay(5);
temp = input;
delay(5);
return temp;
}
void lcdcmd(unsigned char item)   
{
P2 = item;
rs= 0;
rw=0;
e=1;						 
delay(1);
e=0;	
}
void lcddata(double item)   
{
P2 = item;
rs= 1;
rw=0;
e=1;						  
delay(1);
e=0;
}
void disp_temp(double num)          
{
unsigned char third = 0;
unsigned char second = 0;
unsigned char first =0;
third = (num/100);
lcddata(third+0x30);
second = (num - (third*100));
second=(second/10);
lcddata(second+0x30);
first = (num - ((third*100)+(second*10)));
lcddata(first+0x30);
}
void read(){	  
lcdcmd(0x0E);   
lcdcmd(0x01);   
lcdcmd(0x06); 	
lcddata('R');lcddata('E');lcddata('A');lcddata('D');lcddata('I');lcddata('N');lcddata('G');lcddata(' ');
}
void main()
{
P0=0x00;				
                                       
read();					
while(1){			   
newtemp=adc();			
delay(60);		
pass1=adc();			
delay(60);		
   if (newtemp==pass1){	       
        break;			
	}	   
}
while(1){			                                
lcdcmd(0x0E);                    
lcdcmd(0x01);                   
lcdcmd(0x06);  
newtemp = newtemp*(160/255);	
disp_temp(newtemp);	     
delay(300);			 									
while(1){			
newtemp=adc();					    
delay(60);
pass1=adc();
delay(60);
pass2=adc();
   if (newtemp==pass1){
      if(pass1==pass2){
	    break;		} 
	}	   
}
                                   
	   }		
}			