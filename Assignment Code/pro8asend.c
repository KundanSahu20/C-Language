#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,k,x[10];
    printf("\nEnter 10 Number= ");
    for ( i = 0; i < 10; i++)
    scanf("%d",&x[i]);
    /* Ascending Order Strat */
    for ( i = 0; i < 10; i++)
    {
        for ( j = 0; j < 10; j++)
        {
            if(x[j+1]<x[j])
            {
                k=x[j];
                x[j]=x[j+1];
                x[j+1]=k;
            }
        }
        
    }
    printf("\nAscending Order:");
    for(i=0;i<10;i++)
    printf("\n%d",x[i]);
    /* Descending Order Strat */
    for ( i = 0; i < 10; i++)
    {
        for ( j = 0; j < 10; j++)
        {
            if(x[j+1]>x[j])
            {
                k=x[j];
                x[j]=x[j+1];
                x[j+1]=k;
            }
        }
        
    }
    printf("\nDescending Order:");
    for(i=0;i<10;i++)
    printf("\n%d",x[i]);
    getch();
    
}