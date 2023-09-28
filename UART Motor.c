#include<pic18.h>
char rec();
void main()
{
    char c;
    TRISB=0X00;
    TXSTA=0x24;
    RCSTA=0x90;
    SPBRG=129;
    ADCON1=0X0F;
    while(1)
    {
    c=rec();
    if(c=='a')   
    {
        PORTB=0X1D;     //forward
    }
    if(c=='b')   
    {
        PORTB=0X2E;     //reverse
    }
    }
}
char rec()
{
 while(RCIF==0);
 RCIF=0;
 return(RCREG);
}






