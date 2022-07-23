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
    int i,j;
    for(i=0;i<10000;i++);
    //for(j=0;j<100;j++);
}