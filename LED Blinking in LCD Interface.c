#include<pic18.h>
void display(char *p);
void cmd(char a);
void data(char b);
void delay();
void main()
{   
    ADCON1=0X0F;      //Disables the analog input mode 
        TRISA=0XFF;
        TRISC=0X00;
        TRISD=0X00;
        TRISB=0X00;
    cmd(0x38);
    cmd(0x01);
    cmd(0x06);
    cmd(0x0E);
    cmd(0x80);
    
    while(1)
    {
        if(RA0==0)
        {
            PORTB=0XFF;
            delay();
            PORTB=0X00;
            display("Blinking");
            cmd(0x01);
        }
    }
}
void cmd(char a)
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
    int j,m;
    for(j=0;j<100;j++);
    for(m=0;m<100;m++);
}
void display(char *p)
{
    while(*p!='\0')
    {
        data(*p);
        p++;
    }
}

