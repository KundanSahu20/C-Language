#include<stdio.h>
#include<conio.h>
int power(int a,int b);
int power(int a,int b)
{
    int c,d;
    d=1;
    for ( c = 1; c <= b; c++)
    {
        d=d*a;
    }
    return d;
}
void main()
{
    int x,y,z;
    printf("Enter no.& its power");
    scanf("%d%d",&x,&y);
    z=power(x,y);
    printf("\n %d to the power %d=%d",x,y,z);
    getch();

}