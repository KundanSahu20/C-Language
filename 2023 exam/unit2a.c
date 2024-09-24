#include<stdio.h>
#include<conio.h>
void callbyv(int x,int y);
void callbyref(int *p,int *q);
void main()
{
    int a=10,b=50;
    printf("\nValue of a&b in main function=%d %d",a,b);
    callbyv(a,b);
    printf("\nValue of a&b in main function=%d %d",a,b);
    callbyref(&a,&b);
    printf("\nValue of a&b in main function=%d %d",a,b);
    getch();
}
void callbyv(int x,int y)
{
    int z;
    z=x;
    x=y;
    y=z;
    printf("\nAfter swap value function call by value,a=%d and b=%d",x,y);
}
void callbyref(int *p,int *q)
{
    int r;
    r=*p;
    *p=*q;
    *q=r;
    printf("\nAfter swap value function call by reference,a=%d and b=%d",*p,*q);
}