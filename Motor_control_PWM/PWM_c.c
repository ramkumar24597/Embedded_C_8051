#include <reg2051.h>
void pwm(int);
sbit PWM = P1^0;
void main()
{
	int h,l,t;
	PWM = 0;
	t=100;
	h=90;
	l=t-h;
	PWM=1;
	pwm(h);
  PWM=0;
  pwm(l);	
}
void pwm(int n)
{
	int i=0;
  while(i<n)
  {
		TCON=0x01;
		TH0=0xFC;
		TL0=0x66;
		TR0=1;
		while(TF0 == 0);
		TR0 = 0;
		TF0 = 0;
		i++;
  }
}