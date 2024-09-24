#include<stdio.h>
#include<conio.h>
void swapv(int x,int y);
void swapr(int *p,int *q);

int main()
{
    int a=100,b=500;
    printf("\n\n Value Of a= %d and b= %d in main function",a,b);
    swapv(a,b);
    printf("\n\n Value Of a= %d and b= %d in main function",a,b);
    swapr(&a,&b);
    printf("\n\n Value Of a= %d and b= %d in main function",a,b);
    return 0;
}
void swapv( int x, int y)
{
    int z;
    z=x;
    x=y;
    y=z;
    printf("\n After Swaping by value of a= %d and b= %d",x,y);
}
void swapr( int *p,int *q)
{
    int r;
    r=*p;
    *p=*q;
    *q=r;
    printf("\n After Swaping by refrance value of a= %d and b= %d",*p,*q);
}