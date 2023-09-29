//Timer3 for 2 second
#include<pic18.h>
volatile int i;
void timer();
void main()
{
    TRISB=0X00;
    T3CON=0X81;
    TMR3L=0XB0;
    TMR3H=0X3C;
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
    while(c<200)
    {
    while(TMR3IF==0);
     TMR3IF=0; 
     TMR3L=0XB0;
     TMR3H=0X3C;
     c++;
    }
}
