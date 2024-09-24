#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,d,e;
    printf("Enter Number:");
    scanf("%d",&a);
    b=1;
    c=0;
    d=1;
    e=1;
    do
    {
        printf("%d\n",c);
        d=e;
        e=c;
        c=d+e;
        b++;
    }while(b<=a);
    getch();
}