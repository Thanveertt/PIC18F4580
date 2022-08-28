#include<pic18.h>
void delay();
void main()
{
    TRISB=0X00;
    while(1)
    {
        int m;
        for(m=0;m<8;m++)
        {
         PORTB=0X01<<m;
         delay();
        }
    }  
}
void delay()
{
    int i;
    for(i=0;i<10000;i++);
}
