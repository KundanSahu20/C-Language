#include<stdio.h>
#include<conio.h>
int fact( int n);
void main()
{
int x,y;
printf("Enter The Number To Find Factorial= ");
scanf("%d",&x);
y=fact(x);
printf("Factorial Of Number %d=%d",x,y);
getch();
}
int fact( int n)
{
    if(n==0)
    return 1;
    else
    return n*fact(n-1);
}