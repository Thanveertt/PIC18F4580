//PWM 
#include<pic18.h>
void main()
{
    TRISC=0X00;
    T2CON=0X7F;
    //50%
    //CCP1CON=0X0F;
    //CCPR1L=0X7D;
    //25%
    CCP1CON=0X2F;
    CCPR1L=0X3E;
    //75%
   // CCP1CON=0X2F;
    //CCPR1L=0xBB;
    while(1);
}



