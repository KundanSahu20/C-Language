#include<stdio.h>
#include<conio.h>
void clrscr();
void main()
{
    int i;
    char j,x[20];
    printf("Enter Name:");
    for(i=0;i<20;i++)
    {
        scanf("%s",&x[i]);
    }
    void clrscr();
    printf("\n Entered Name:");
    for(i=0;i<20;i++)
    {
        printf("\n x[%d]=%s",i,x[i]);
    }
    printf("\nEnter Name to search");
    scanf("%s",&j);
    for(i=0;i<20;i++)
    {
        if(x[i]==j)
        {
            printf("\nNumber is x[%d]=%s",i,x[i]);
            goto out;
        }
    }
    printf("\n Name is not avalable");
    out:
    getch();

}