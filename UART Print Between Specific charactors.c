#include<pic18.h>
void trans(char a);
char rec();
void main()
{
    char c;
    char a[10];
    int i,flag=0;
    TXSTA=0x24;
    RCSTA=0x90;
    SPBRG=129;
    while(1)
    {
        c=rec();
       if(c=='#')
       {
           flag=0;                  
       }
       if(flag==1)
       {
           trans(c);
       } 
        if(c=='*')
       {
           flag=1;
       }
    }
/*
    while(1)
    {
        while(rec()!='*');
        for(i=0;a[i-1]!='#';i++)
        {                                   //another way
        a[i]=rec();
        trans(a[i-1]);
        }
*/
} 
void trans(char a)
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
