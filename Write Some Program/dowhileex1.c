#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b=2,c;
    printf("Enter Number For Check Number is Prime or Not: \n");
    scanf("%d",&a);
    do
    {
        c=a%b;
        if(c==0)
        {
            printf("Inserted Number is not prime number\n");
        }
        else
            printf("Inserted number is prime number ");

    }
    while(c!=0);

    getch();    
}