#include<stdio.h>
#include<conio.h>

void main()
{
    int x[10],i,j,k;
    printf("Enter 10 Number: ");
    for ( i = 0; i < 10; i++)
    scanf("%d",&x[i]);
    for ( i = 0; i < 10; i++)
    {
        for(j=0;j<10;j++)
        {
            if( x[j+1]>x[j])
            {
                k=x[j];
                x[j]=x[j+1];
                x[j+1]=k;
            }
        }
    }
    printf("\nsarted value: ");
    for(i=0;i<10;i++)
    printf("\n%d",x[i]);
    getch();    
    
}