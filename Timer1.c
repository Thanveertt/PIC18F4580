//Timer1 for 1 second
#include<pic18.h>
volatile int i;
void timer();
void main()
{
    TRISB=0X00;
    T1CON=0X49;
    TMR1L=0XB0;
    TMR1H=0X3C;
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
    int c=0;
    while(c<100)
    {
    while(TMR1IF==0);
     TMR1IF=0; 
     TMR1L=0XB0;
     TMR1H=0X3C;
     c++;
    }
}
