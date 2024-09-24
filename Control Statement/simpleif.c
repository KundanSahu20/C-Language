#include<stdio.h>
#include<conio.h>
void  main()
{
    int a,b,c,d;
    printf("Enter Two Value :- ");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        c=a*b;
        d=a+b;
        printf("c=%d\n",c);
        printf("d=%d\n",d);
    }
    printf(" a is not greater than b value, a value is must be greater than b value.");
    getch();

}