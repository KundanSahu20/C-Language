
/* Write a program for defined area of triangle and area of rectangle.
formula=[(area of triangle= 1/2.base.height)][area of rectangle =length.width]*/

#include<stdio.h>
#include<conio.h>
void main()
{
    float base,height,area;
    int length,width,area1;
    printf("Enter  base & height = ");
    scanf("%f%f",&base,&height);

    area=base*height/2;

    printf("Area of triangle is =%f\n",area);
    printf("Enter length & width= ");
    scanf("%d%d",&length,&width);

    area1=length*width;
    printf("Area of rectangle = %d",area1);

    getch();

}