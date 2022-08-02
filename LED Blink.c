#include<pic18.h>
void delay();
void main()
{
    TRISB=0X00;
    while(1)
    {
        PORTB=0Xff;
        delay();
        PORTB=0X00;
        delay();
    }  
}
void delay()
{
    int i;
    for(i=0;i<10000;i++);
}
