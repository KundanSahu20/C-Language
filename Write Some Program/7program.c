/* Write a program for volume of cube and volume of cylinder.
formula:- (volume of cube= a^3 or a*a*a) (volume of cylinder= pie*r^2*h or 3.14*radius*radius*height)*/

#include<stdio.h>
#include<conio.h>
void main()
{
    int area,V1;
    float height,radius,V2;
    printf("Enter  area = ");
    scanf("%d",&area);

    V1=area*area*area;

    printf("Volume of cude is =%d\n",V1);
    printf("Enter radius & height= ");
    scanf("%f%f",&radius,&height);

    V2=3.14*radius*radius*height;
    printf("Volume of cylinder is= %f",V2);

    getch();

}