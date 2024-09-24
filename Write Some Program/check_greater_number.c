#include<stdio.h>
#include<conio.h>

void main()
{
    int  x,y;

    printf("Enter Two Number To Check Which is Greater Number:- ");
    scanf("%d%d",&x,&y);

    if(x>y)
     printf("x is greater than y=%d",x);
    else
     printf("y is greater than x=%d",y);

    getch();

}