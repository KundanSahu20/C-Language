#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j;
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
            z[i][j] = x[i][j] - y[i][j];
        }
        
    }
     printf("SUBTRACTION OF X & Y:  \n");
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