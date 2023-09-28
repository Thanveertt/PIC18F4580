#include<pic18.h>
void display(char *p);
void trans(char a);
void main()
{
    char a[]="thanveer";
    TXSTA=0x24;
    RCSTA=0x80;
    SPBRG=129;
    display(a);    
    while(1);
}
void trans(char  a)
{
    TXIF=0; 
    while(TXIF==0);
    TXREG=a;
}
void display(char *p)
{
    while(*p!='\0')
    {
        trans(*p);
        p++;
        
    }
}
