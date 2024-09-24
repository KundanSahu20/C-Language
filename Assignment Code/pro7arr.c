#include<stdio.h>
#include<conio.h>
void main()
{
    int x[10],i,j;
    printf("\nEnter 10 Number =");
    for ( i = 0; i < 10; i++)
    scanf("%d",&x[i]);
    for ( i = 0; i < 10; i++)
    {
        printf("\nx[%d]=%d",i,x[i]);
    }
    printf("\nEnter Number to Search Number= ");
    scanf("%d",&j);
    for ( i = 0; i < 10; i++)
    {
        if(x[i]==j)
        {
            printf("\nNumber is avalable in x[%d] =%d",i,j);
            goto end;
        }
    }
    printf("\nNumber is not avalable");
    end:
    getch();
}