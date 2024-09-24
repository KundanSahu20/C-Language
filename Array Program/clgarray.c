#include<stdio.h>
#include<conio.h>
void clrscr();
void main()
{
    int i,j,x[5];
    printf("Enter Number:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }
    void clrscr();
    printf("\n Entered Value And Their Addition");
    j=0;
    for(i=0;i<5;i++)
    {
        printf("\n x[%d]=%d",i,x[i]);
        j=j+x[i];
    }
    printf("\nAddition of numbers= %d",j);
    getch();

}