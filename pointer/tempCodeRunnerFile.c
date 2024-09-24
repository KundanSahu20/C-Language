#include<stdio.h>
#include<conio.h>
void main()
{
int a=500;
int *p;
p=&a;
printf("\nAddress Of a=%u & Value=%d",&a,a);
printf("\nAddress Of p=%u & Value=%u",&p,p);
printf("\nValue Of a by p= %d",*p);
getch();
}