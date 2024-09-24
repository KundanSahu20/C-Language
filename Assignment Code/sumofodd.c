#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i,sum=0;
    printf("Enter number until find its sum=");
    scanf("%d",&a);
    for ( i = 1; i < a; i=i+2)
    {
        sum=sum+i;
    }
    printf("Sum=%d",sum);
    getch();
}