//Timer2 for 1 second
#include<pic18.h>
volatile int i;
void timer();
void main()
{
    TRISB=0X00;
    T2CON=0XFF;
    PR2=195;
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
    while(TMR2IF==0);
     TMR2IF=0; 
     c++;
    }
}

