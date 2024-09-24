#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,factorial=1;
    printf("\nEnter Number to Find Factorial of entered number= ");
    scanf("%d",&j);
    for(i=1;i<=j;i++)
    {
        factorial=factorial*i;
    }
    printf("\nFactorial of given number = %d",factorial);
    getch();

}