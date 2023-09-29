//Timer0 for 1 second
#include<pic18.h>
volatile int i;
void timer();
void main()
{
    TRISB=0X00;
    T0CON=0XC7;
    TMR0=61;
    while(1)
    {
        PORTB=0XFF;
        timer();
        PORTB=0X00;
        timer();
    }
}
void timer()
{
    for(i=0;i<100;i++)
    {
    while(TMR0IF==0);
     TMR0IF=0; 
     TMR0=61;
    }
}
