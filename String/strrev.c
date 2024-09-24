#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char x[50];
    printf("\nEnter The String = ");
    gets(x);
    puts(strrev(x));
    getch();
}