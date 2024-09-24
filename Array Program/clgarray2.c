#include<stdio.h>
#include<conio.h>
void clrscr();
void main()
{
    int i,j,x[10];
    printf("Enter Number:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }
    void clrscr();
    printf("\n Entered Value:");
    for(i=0;i<10;i++)
    {
        printf("\n x[%d]=%d",i,x[i]);
    }
    printf("\nEnter Number to search");
    scanf("%d",&j);
    for(i=0;i<10;i++)
    {
        if(x[i]==j)
        {
            printf("\nNumber is x[%d]=%d",i,x[i]);
            goto out;
        }
    }
    printf("\n Number is not avalable");
    out:
    getch();

}