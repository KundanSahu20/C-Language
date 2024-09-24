#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,x,y,z;
    printf("Generate Pattern 1\n");
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
       {
         printf("%d ",j);
       }
         printf("\n");
    }
    printf("Generate Pattern 2\n");
    for(x=1;x<=4;x++)
    {
        for(y=4;y>x;y--)
        { 
            printf(" ");
        }
        for(z=1;z<=x;z++)
        {
            printf("* ");
        }
        printf("\n");
    }
    getch();
}