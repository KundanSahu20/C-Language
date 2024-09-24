#include<stdio.h>
#include<conio.h>
int greater(int *p,int *q);
void main()
{
    int a,b,s;
    printf("\nEnter Number=");
    scanf("%d%d",&a,&b);
    s=greater(&a,&b);
    printf("\nGreater Number is %d ",s);
    getch();
}
int greater(int *p,int *q)
{
    if(*p>*q)
    return *p;
    else
    return *q;
}