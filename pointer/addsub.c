#include<stdio.h>
#include<conio.h>

void main()
{
    int x=500;
    int *p;
    p=&x;

    printf("Address of x = %u",&x);
    p=p+1;
    printf("\n Address of x = %u",p);
    p=p+3;
    printf("\n Address of x = %u",p);
    getch();

}