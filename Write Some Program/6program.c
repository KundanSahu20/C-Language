/* Write a program for defined area of circle.
formula= (pie.radius^2)or(3.14*radius*radius)*/
#include<stdio.h>
#include<conio.h>
void main()
{
    float radius,area;
    printf("Enter  radius od circle = ");
    scanf("%f",&radius);

    area=3.14*radius*radius;

    printf("Area of circle is =%f\n",area);

    getch();

}
