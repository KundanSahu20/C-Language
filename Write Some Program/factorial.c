#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,f=1;
    printf("ENTER VALUE");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("Factorial of given number is %d",f);

    getch();

}