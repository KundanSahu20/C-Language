#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,d,e,f,g;
    printf("Enter Two Number:-");
    scanf("%d%d",&a,&b);
    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    printf("addition of a & b=%d",c);
    printf("subtraction of a & b=%d",d);
    printf("multiplecation of a & b=%d",e);
    printf("division of a & b=%d",f);
    getch();
}