#include<stdio.h>
#include<conio.h>
void  main()
{
    int a,b;
    printf("Enter Number :- ");
    scanf("%d",&a);
    b=a%2;
    if(b==0)
     printf("Entered Number Is Even ");
    else
     printf("Entered Number Is Odd");
    getch();
    
}