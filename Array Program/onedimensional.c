#include<stdio.h>
#include<conio.h>

void main()
{
    int x[5],i;
    printf("Enter 5 Number: ");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&x[i]);
    }
    printf("\nValue of array-");
    for ( i = 0; i < 5; i++)
    {
        printf("\n VALUE OF x[%d]=%d",i,x[i]);
    }
    getch();    
    
}