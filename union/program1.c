#include<stdio.h>
#include<conio.h>
union student
{
    int rolln;
    int total;
    float per;
}s;

void main()
{
printf("\nEnter Roll Number =");
scanf("%d",&s.rolln);
printf("Roll Number =%d ",s.rolln);
printf("\nEnter Total Number =");
scanf("%d",&s.total);
printf("Total Number = %d",s.total);
printf("\nEnter Percentage of student = ");
scanf("%f",&s.per);
printf("Percentage = %f",s.per);
getch();
}