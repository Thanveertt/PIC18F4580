//Compare
#include<pic18.h>
void main()
{
    TRISC=0X00;
    T1CON=0X49;
    TMR1L=0X00;
    TMR1H=0X00;
    //HIGH
    //CCP1CON=0X08;
    //LOW
    CCP1CON=0X09;
    CCPR1H=0X00;
    CCPR1L=0X11;
    while(CCP1IF==0);
    CCP1IF=0; 
}

