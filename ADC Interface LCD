#include<pic18.h>
void delay();
void cmd(int a);
void data(char b);
void main()
{
  int m,n[10],a;	
  TRISA=0XFF;
	TRISD=0X00;
	TRISC=0X00;
	ADCON0=0X05;
	ADCON1=0X00;
	ADCON2=0X06;
	cmd(0x38);
	cmd(0x01);
	cmd(0x06);
	cmd(0x0E);
	cmd(0x80);
	while(1)
	{
	GODONE=1;  // GO/DONE: A/D Conversion Status bit
	while(GODONE==1);
	a=ADRESH;  // A/D Result High Register (ADRESH)
    for(m=0;m<3;m++)
    {
        n[2-m]=(a%10)+48; //48 is ascii value for 0
        a=a/10;
    }
    for(m=0;m<3;m++)
     {
         data(n[m]);
     }
	delay();
  cmd(0x01);
	}
}
void cmd(int a)
{
	PORTD=a;
	RC0=0;
	RC1=1;
	delay();
	RC1=0;
}
void data(char b)
{
	PORTD=b;
	RC0=1;
	RC1=1;
	delay();
	RC1=0;
}
void delay()
{
	int i,j;
	for(i=0;i<300;i++);
	for(j=0;j<100;j++);
}

