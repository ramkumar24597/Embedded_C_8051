#include <reg51.h>
sbit but = P2^1;
void main()
{
	int i,l=0;
	but = 0;
	TMOD = 0x20;
	PCON = 0x80;
	TH1 = 0xFA;
	SCON = 0x50;
  TR1 =1; 
	if( but == 1)
	{
		unsigned char x[] = "in on condition";
		for(i=0;i<10;i++)
	{
		SBUF = x[i];
		while(TI == 0);
		TI=0;	
}
	}
	else
	{
		unsigned char y[]="in off condition";
		for(i=0;i<10;i++)
	{
		SBUF = y[i];
		while(TI == 0);
		TI=0;	
}
	}
	
}
