#include<pic18.h>
void delay();
void main()
{  
    while(1)
    {
    TRISC=0XFF;		// input pin
    TRISB=0X00; 		// output pin
    if(RC1==0)
    {
        PORTB=0XFF;
        delay();
        PORTB=0X00;
        delay();
    }
    if(RC2==0)
    {
        int b;
        for(b=0;b<8;b++)
        {
         PORTB=0X08>>b;
         delay();
        }
    }
    if(RC3==0)
    {
        int m;
        for(m=0;m<8;m++)
        {
         PORTB=0X01<<m;
         delay();
        }
    }
     
    }  
}
void delay()
{
    int i,j;
    for(i=0;i<100;i++)
    for(j=0;j<1000;j++);
}

