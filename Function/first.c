#include<stdio.h>
#include<conio.h>
void line();

void main()
{
    line();
    printf("\nKUNDAN SAHU");
    line();
    getch();
}
void line()
{
    int a;
    printf("\n");
    for(a=0;a<=10;a++)
    printf("*");
}