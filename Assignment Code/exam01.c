#include<stdio.h>
#include<conio.h>
 void main()
 {
    int a,b,c,sum=0;
    c=1;
    for( b=1;b<=10;b++)
    {
        sum=sum+c;
        c=c+2;
    }
    printf("Sum of 10 first odd number=%d",sum);
    getch();
 }