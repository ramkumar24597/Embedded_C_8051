#include <reg51.h>
sbit but = P2^1;
void serial_print(unsigned char);
void serial_0()
{
	serial_print('0');
	serial_print(' ');
	//serial_print(0x00);
	//serial_print(0x01);
	//serial_print(0x02);
	//serial_print(0x03);
	//serial_print(0x04);
	//serial_print(0x05);
	//serial_print(0x06);
	//serial_print(0x07);
	//serial_print(0x08);
	//serial_print(0x09);
	//serial_print(0x0A);
	//serial_print(0x0B);
	//serial_print(0x0C);                           //   clr before values completely
	serial_print(0x0D);                         //   feed line
  //serial_print(0x0E);
  //serial_print(0x0F);
	//serial_print(' ');
return;
}
void serial_1()
{
	 serial_print('1');
	serial_print(' ');
	serial_print(0x10);
	serial_print(0x11);
	serial_print(0x12);
	serial_print(0x13);
	serial_print(0x14);
	serial_print(0x15);
	serial_print(0x16);
	serial_print(0x17);
	serial_print(0x18);
	serial_print(0x19);
	serial_print(0x1A);
	serial_print(0x1B);
	serial_print(0x1C);
	serial_print(0x1D);
  serial_print(0x1E);
  serial_print(0x1F);
	serial_print(' ');
return;
}
void serial_2()
{
	 serial_print('2');
	serial_print(' ');
	serial_print(0x20);
	serial_print(0x21);
	serial_print(0x22);
	serial_print(0x23);
	serial_print(0x24);
	serial_print(0x25);
	serial_print(0x26);
	serial_print(0x27);
	serial_print(0x28);
	serial_print(0x29);
	serial_print(0x2A);
	serial_print(0x2B);
	serial_print(0x2C);
	serial_print(0x2D);
  serial_print(0x2E);
  serial_print(0x2F);
	serial_print(' ');
	
return;
}
void serial_3()
{
	serial_print('3');
	serial_print(' ');
	serial_print(0x30);
	serial_print(0x31);
	serial_print(0x32);
	serial_print(0x33);
	serial_print(0x34);
	serial_print(0x35);
	serial_print(0x36);
	serial_print(0x37);
	serial_print(0x38);
	serial_print(0x39);
	serial_print(0x3A);
	serial_print(0x3B);
	serial_print(0x3C);
	serial_print(0x3D);
  serial_print(0x3E);
  serial_print(0x3F);
	serial_print(' ');
return;
}
void serial_4()
{
	 serial_print('4');
	serial_print(' ');
	serial_print(0x40);
	serial_print(0x41);
	serial_print(0x42);
	serial_print(0x43);
	serial_print(0x44);
	serial_print(0x45);
	serial_print(0x46);
	serial_print(0x47);
	serial_print(0x48);
	serial_print(0x49);
	serial_print(0x4A);
	serial_print(0x4B);
	serial_print(0x4C);
	serial_print(0x4D);
  serial_print(0x4E);
  serial_print(0x4F);
	serial_print(' ');
return;
}
void serial_5()
{
	serial_print('5');
	serial_print(' ');
	serial_print(0x50);
	serial_print(0x51);
	serial_print(0x52);
	serial_print(0x53);
	serial_print(0x54);
	serial_print(0x55);
	serial_print(0x56);
	serial_print(0x57);
	serial_print(0x58);
	serial_print(0x59);
	serial_print(0x5A);
	serial_print(0x5B);
	serial_print(0x5C);
	serial_print(0x5D);
  serial_print(0x5E);
  serial_print(0x5F);	
	serial_print(' ');
	return;
}
void serial_6()
{
	serial_print('6');
	serial_print(' ');
	serial_print(0x60);
	serial_print(0x61);
	serial_print(0x62);
	serial_print(0x63);
	serial_print(0x64);
	serial_print(0x65);
	serial_print(0x66);
	serial_print(0x67);
	serial_print(0x68);
	serial_print(0x69);
	serial_print(0x6A);
	serial_print(0x6B);
	serial_print(0x6C);
	serial_print(0x6D);
  serial_print(0x6E);
  serial_print(0x6F);
	serial_print(' ');
return;
}
void serial_7()
{
	serial_print('7');
	serial_print(' ');
	serial_print(0x70);
	serial_print(0x71);
	serial_print(0x72);
	serial_print(0x73);
	serial_print(0x74);
	serial_print(0x75);
	serial_print(0x76);
	serial_print(0x77);
	serial_print(0x78);
	serial_print(0x79);
	serial_print(0x7A);
	serial_print(0x7B);
	serial_print(0x7C);
	serial_print(0x7D);
  serial_print(0x7E);
  serial_print(0x7F);
	serial_print(' ');
return;
}
void serial_8()
{
	 serial_print('8');
	serial_print(' ');
	serial_print(0x80);
	serial_print(0x81);
	serial_print(0x82);
	serial_print(0x83);
	serial_print(0x84);
	serial_print(0x85);
	serial_print(0x86);
	serial_print(0x87);
	serial_print(0x88);
	serial_print(0x89);
	serial_print(0x8A);
	serial_print(0x8B);
	serial_print(0x8C);
	serial_print(0x8D);
  serial_print(0x8E);
  serial_print(0x8F);
	serial_print(' ');
return;
}

void serial_9()
{
	serial_print('9');
	serial_print(' ');
	serial_print(0x90);
	serial_print(0x91);
	serial_print(0x92);
	serial_print(0x93);
	serial_print(0x94);
	serial_print(0x95);
	serial_print(0x96);
	serial_print(0x97);
	serial_print(0x98);
	serial_print(0x99);
	serial_print(0x9A);
	serial_print(0x9B);
	serial_print(0x9C);
	serial_print(0x9D);
  serial_print(0x9E);
  serial_print(0x9F);	
	serial_print(' ');
return;
}
void serial_A()
{
	serial_print('A');
	serial_print(' ');
	serial_print(0xA0);
	serial_print(0xA1);
	serial_print(0xA2);
	serial_print(0xA3);
	serial_print(0xA4);
	serial_print(0xA5);
	serial_print(0xA6);
	serial_print(0xA7);
	serial_print(0xA8);
	serial_print(0xA9);
	serial_print(0xAA);
	serial_print(0xAB);
	serial_print(0xAC);
	serial_print(0xAD);
  serial_print(0xAE);
  serial_print(0xAF);
	serial_print(' ');
return;
}
void serial_B()
{
	serial_print('B');
	serial_print(' ');
	serial_print(0xB0);                         // Degree symbol
	//serial_print(0xB1);
	//serial_print(0xB2);
	//serial_print(0xB3);
	//serial_print(0xB4);
	//serial_print(0xB5);
	//serial_print(0xB6);
	//serial_print(0xB7);
	//serial_print(0xB8);
	//serial_print(0xB9);
	//serial_print(0xBA);
	//serial_print(0xBB);
	//serial_print(0xBC);
	//serial_print(0xBD);
  //serial_print(0xBE);
  serial_print(0xBF);
	serial_print(' ');
return;
}
void serial_C()
{
	serial_print('C');
	serial_print(' ');
	serial_print(0xC0);
	serial_print(0xC1);
	serial_print(0xC2);
	serial_print(0xC3);
	serial_print(0xC4);
	serial_print(0xC5);
	serial_print(0xC6);
	serial_print(0xC7);
	serial_print(0xC8);
	serial_print(0xC9);
	serial_print(0xCA);
	serial_print(0xCB);
	serial_print(0xCC);
	serial_print(0xCD);
  serial_print(0xCE);
  serial_print(0xCF);
	serial_print(' ');
return;
}
void serial_D()
{
		serial_print('D');
	serial_print(' ');
	serial_print(0xD0);
	serial_print(0xD1);
	serial_print(0xD2);
	serial_print(0xD3);
	serial_print(0xD4);
	serial_print(0xD5);
	serial_print(0xD6);
	serial_print(0xD7);
	serial_print(0xD8);
	serial_print(0xD9);
	serial_print(0xDA);
	serial_print(0xDB);
	serial_print(0xDC);
	serial_print(0xDD);
  serial_print(0xDE);
  serial_print(0xDF);
	serial_print(' ');
return;
}
void serial_E()
{
		serial_print('E');
	serial_print(' ');
	serial_print(0xE0);
	serial_print(0xE1);
	serial_print(0xE2);
	serial_print(0xE3);
	serial_print(0xE4);
	serial_print(0xE5);
	serial_print(0xE6);
	serial_print(0xE7);
	serial_print(0xE8);
	serial_print(0xE9);
	serial_print(0xEA);
	serial_print(0xEB);
	serial_print(0xEC);
	serial_print(0xED);
  serial_print(0xEE);
  serial_print(0xEF);
	serial_print(' ');
	
  return;
}
void serial_F()
{
		serial_print('F');
	serial_print(' ');
	serial_print(0xF0);
	serial_print(0xF1);
	serial_print(0xF2);
	serial_print(0xF3);
	serial_print(0xF4);
	serial_print(0xF5);
	serial_print(0xF6);
	serial_print(0xF7);
	serial_print(0xF8);
	serial_print(0xF9);
	serial_print(0xFA);
	serial_print(0xFB);
	serial_print(0xFC);
	serial_print(0xFD);
  serial_print(0xFE);
  serial_print(0xFF);
	serial_print(' ');	
  return;
}
void serial()
{
	serial_0();
	serial_1();
	serial_2();
	//serial_3();
	//serial_4();
	//serial_5();
	//serial_6();
	//serial_7();
	//serial_8();
	//serial_9();
	//serial_A();
	serial_B();
	//serial_C();
  //serial_D();
	//serial_E();
  //serial_F();
	return;
}
void main()
{
	int i = 0;
	TMOD = 0x20;
	PCON = 0x80;
	TH1 = 0xFA;
	SCON = 0x50;
  TR1 =1; 
	serial();
	while(i==0); 
}

void serial_print(unsigned char n)
{
	SBUF = n;
	while(TI == 0);
	TI = 0;
	return;
}
