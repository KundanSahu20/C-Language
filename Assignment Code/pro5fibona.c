#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,c,d,e,sum;
    printf("\nEnter Number to print fibonacci series & it's sum= ");
    scanf("%d",&a);
    b=0;
    c=1;
    sum=1;
    printf("\nFibonacci Series:");
    printf("\n%d\n%d",b,c);
    for(d=3;d<=a;d++)
    {
        e=b+c;
        printf("\n%d",e);
        b=c;
        c=e;
        sum=sum+e;
    }
    printf("\nSum of Fibonacci Series Num= %d",sum);
    getch();    
}