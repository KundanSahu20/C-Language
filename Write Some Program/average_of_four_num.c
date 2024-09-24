#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b,c,d,e;

    printf("Enter four number = ");
    scanf("%f%f%f%f",&a,&b,&c,&d);

    e=(a+b+c+d)/4;

    printf("Average of Four Number is %f",e);

    getch();

}