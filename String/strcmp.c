#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char x[50],y[50];
    int a,j,k;
    printf("\nEnter The String 1 = ");
    scanf("%s%s",&x,&y);
    a=strcmp(x,x);
    j=strcmp(x,y);
    printf("\nDiffrances Between X and Y = %d , %d ",a,j);
    getch();
}