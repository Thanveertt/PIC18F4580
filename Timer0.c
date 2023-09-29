//Timer0 for 10 milliseconds
#include<pic18.h>
void timer();
void main()
{
    TRISB=0X00;
    T0CON=0XC7;
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
     while(TMR0IF==0);
     TMR0IF=0; 
     TMR0=61;
}
