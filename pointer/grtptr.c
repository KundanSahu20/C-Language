#include<stdio.h> 
#include<conio.h>
int greater(int*p,int*q,int*r); 
void main ()
{

    int a,b,c,d;
    printf("\n Enter 3 Number to Check Greater Number="); 
    scanf("%d%d%d",&a,&b,&c);
    d=greater(&a,&b,&c);

    printf("\n Greater Value out of 3 value=%d",d); 
    getch();
}
int greater(int*p,int*q,int*r)
{

    if(*p>*q&&*p>*r) 
        return *p;
    else if(*q>*p&&*q>*r)
        return *q;
    else 
        return *r;
 
}
