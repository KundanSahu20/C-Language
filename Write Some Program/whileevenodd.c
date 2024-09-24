#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("Odd Number upto 100");
    a=1;
    while(a<=100)
    {
        printf("\n%d",a);
        a=a+2;
    }
    printf("\nEven Number upto 100");
    b=2;
    while(b<=100)
    {
        printf("\n%d",b);
        b=b+2;
    }
    getch();

}