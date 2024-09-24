#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,x;
    printf("THIS IS A PATTERN ");
    for(a=1;a<=4;a++)
    {
        printf("\n");
        for(b=4;b<=a;b--)
        {
            printf("");
        }
        for(x=1;x<=a;x++)
        {
            printf("*");
        }
    }
    getch();
}