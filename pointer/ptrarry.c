#include<stdio.h>
#include<conio.h>
void main()
{
    int a=0,b,x[10],*p;
    printf("\nEnter 10 Value =");
    for( b=0;b<10;b++)
    scanf("%d",&x[b]);
    p=&x[0];
    for ( b=0;b<10;b++)
    {
        a=a+*p;
        p++;
    }
    printf("\nAddition of x= %d",a);
    getch();
}