#include<pic18.h>

void delay();
void main()
{   
    TRISC=0XFF;     // input pin
    TRISB=0X00;     // output pin
    while(1)
    {
        
        if(RC0==0)
        {
           PORTB=0X1D;  //FORWARD
         	delay();
           
        }
        if(RC1==0)
        {
           PORTB=0X2E;  //REVERSE
           delay();
        }
    }
}

void delay()
{
    int j,m;
    for(j=0;j<1000;j++);
    for(m=0;m<1000;m++);
}

