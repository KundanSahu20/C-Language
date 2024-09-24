#include<stdio.h>
#include<conio.h>
int power(int x,int y);
void main()
{
    int x,y,z;
    printf("Enter Number & it's power = ");
    scanf("%d%d",&x,&y);
    z=power(x,y);
    printf("\nNumber %d to Power of %d=%d",x,y,z);
    getch();
}
int power(int x,int y)
{
    int c,d;
    d=1;
    for ( c = 1; c <= y; c++)
    {
        d=d*x;
    }
    return d;
}