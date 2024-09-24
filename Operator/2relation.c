#include<stdio.h>
#include<conio.h>

void main()
{
    int a=7,b=7,c=15;

    printf("%d == %d is %d \n",a,b, a==b);
    printf("%d == %d is %d \n",a,c, a==c);
    printf("%d >= %d is %d \n",a,b, a>=b);
    printf("%d >= %d is %d \n",a,c, a>=c);
    printf("%d <= %d is %d \n",a,b, a<=b);
    printf("%d <= %d is %d \n",a,c, a<=c);
    printf("%d != %d is %d \n",a,b, a!=b);
    printf("%d != %d is %d \n",a,c, a!=c);
    printf("%d < %d is %d \n",a,b, a<b);
    printf("%d < %d is %d \n",a,c, a<c);
    printf("%d > %d is %d \n",a,b, a>b);
    printf("%d > %d is %d \n",a,c, a>c);
    getch();

}