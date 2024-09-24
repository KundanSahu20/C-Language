#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("Enter Number:");
    scanf("%d",&a);
    b=2;
    do
    {
        c=a%b;
        if(c==0)
        {
            printf("\nNumber is not prime");
            break;
        }
        b++;
    }while(b<=a/2);
    if(c!=0)
    printf("\n Number is prime");
    getch();

    
}