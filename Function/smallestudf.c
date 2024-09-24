#include<stdio.h>
#include<conio.h>
void line();
int smallest(int a, int b, int c);

void main()
{
    int x,y,z,t;
    printf("ENTER NUMBER TO FIND SMALLEST = ");
    scanf("%d%d%d",&x,&y,&z);
    t=smallest(x,y,z);
    line();
    printf("\n\tSMALLEST VALUE IS %d\n",t);
    line();
    getch();
}
void line()
{
    int i;
    for ( i = 1; i < 11; i++)
    {
     printf(" * ");
    }
}

int smallest( int a, int b,int c)
{
    if(a<b && a<c)
    return a;
    else if (b<a && b<c)
    return b;
    else
    return c;
}