/* 
PRINT THE 3X3 MATRIX
*/
#include<stdio.h>
#include<conio.h>

void main()
{
    int x[3][3],i,j;
    printf("Enter values of matrix\n");
    for ( i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    printf("\n MATRIX TABLE:- ");
    for ( i = 0; i < 3; i++) 
    {
        printf("\n");
        for(j = 0; j < 3; j++)
        {
            {
            printf("%d  ",x[i][j]);
            }
        }
    }
    getch();    
    
}