#include<pic18.h>
void delay();
long i;
void main()
{ 
    TRISA=0X00;
    TRISC=0X00;
    TRISD=0X00;
    TRISB=0XFF;
    ADCON1=0X0F;
    GIE=1;//Global Interrupt Enable bit
    PEIE=1;//Peripheral Interrupt Enable bit
    INT0IE=1;//Enables the INT0 external interrupt
    INT1IE=1;//Enables the INT1 external interrupt
    IPEN=1; //Priority Enable bit
    INT1IP=0;// Set INT1 as low priority
    PORTC=0XFF;
    PORTD=0XFF;
    while(1)
    {
     PORTA=0XFF;
     delay();
     PORTA=0X00;
     delay();
    }
}
void delay()
{
   
    for(i=0;i<100000;i++);
}
void __interrupt() H(void)
{
    if(INT0IF==1)
    {
        PORTD=~PORTD;
        delay();
    }
   INT0IF=0;
}

void  __interrupt(low_priority) J(void)
{
   
    if(INT1IF==1)
    { 
   PORTC=~PORTC;
   delay();
    }
   INT1IF=0;
   
}
 