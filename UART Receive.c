#include<pic18.h>
char rec();
void main()
{
    char c;
    TRISB=0X00;
    TXSTA=0x24;
    RCSTA=0x90;
    SPBRG=129;
    while(1)
    {
    ADCON1=0X0F;
    c=rec();  
    if(c=='a')   
    {
       PORTB=0XF0;
    }
     if(c=='b')   
    {
        
       PORTB=0X00;
    }
    if(c=='d')   
    {
       PORTB=0XFF;
    }
    }
}
char rec()
{
 while(RCIF==0);
 RCIF=0;
 return(RCREG);
}
