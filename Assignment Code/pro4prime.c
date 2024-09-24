#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,count=0;
    printf("\nEnter Number to Check Prime or Not= ");
    scanf("%d",&i);
    for(j=1;j<=i;j++)
    {
        if(i%j==0)
        count++;
    }
    if(count==2)
    printf("\nNumber is Prime");
    else
    printf("\nNumber is Not Prime");
    getch();
}