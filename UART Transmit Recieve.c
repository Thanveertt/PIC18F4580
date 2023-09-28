#include<pic18.h>
void trans(char a);
char rec();
void main()
{
    char c;
    TXSTA=0x24;
    RCSTA=0x90;
    SPBRG=129;
    while(1)
    {
    c=rec();
    trans(c);
    }
     
}
void trans(char  a)
{
    TXIF=0; 
    while(TXIF==0);
    TXREG=a;
}
char rec()
{
 while(RCIF==0);
 RCIF=0;
 return(RCREG);
}
