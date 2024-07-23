//Capture
#include<pic18.h>
void main()
{
    TRISC=0XFF;
    T1CON=0X49;
    TMR1L=0X00;
    TMR1H=0X00;
    //falling edge
    CCP1CON=0X04;
    //rising edge
    //CCP1CON=0X05;
    while(1);
}


