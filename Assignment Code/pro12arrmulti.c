#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,k,sum=0;
    int x[3][3],y[3][3],z[3][3];

    printf("Enter 9 Number of first matrix x: \n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
     printf("Enter 9 Number of second matrix y: \n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&y[i][j]);
        }
    }
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            for ( k = 0; k < 3; k++)
            {
                sum = sum+ x[i][k] * y[k][j];            
            }
            z[i][j]=sum;
            sum=0;
        }
    }
    printf("\nFirst Matrix:");
    {
        for ( i = 0; i < 3; i++)
    {
        printf("\n");
        for ( j = 0; j < 3; j++)
        {
            printf("%d  ",x[i][j]);
        }
    }
    }
    printf("\nSecond Matrix:");
    {
        for ( i = 0; i < 3; i++)
    {
        printf("\n");
        for ( j = 0; j < 3; j++)
        {
            printf("%d  ",y[i][j]);
        }
    }
    }
    printf("\nMULTIPLICATION OF X & Y:");
    for ( i = 0; i < 3; i++)
    {
        printf("\n");
        for ( j = 0; j < 3; j++)
        {
            printf("%d  ",z[i][j]);
        }
    }
    getch();
}