#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b,c;

    printf("Enter Value Of a & b = ");
    scanf("%f%f",&a,&b);

    c=(a*a+b*b)/(a+b);

    printf("Value Of C= %f",c);

    getch();

}