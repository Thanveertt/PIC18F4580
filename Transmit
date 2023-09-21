#include<pic18.h>
void trans(char a);
void main()
{
    char a='b';
    TXSTA=0x24;
    RCSTA=0x80;
    SPBRG=129;
    trans(a);     
    while(1);
}
void trans(char  a)
{
    TXIF=0; 
    while(TXIF==0);
    TXREG=a;
}
