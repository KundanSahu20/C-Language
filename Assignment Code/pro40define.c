#include<stdio.h>
#include<conio.h>

#define PI 3.14159

void main()
{
    float r,a;

    printf("Enter Radius : ");
    scanf("%f",&r);

    a=PI * r * r;

    printf("\nArea of Circle: %f",a);
    getch();
}