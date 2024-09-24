#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int a,b,c;
    char x[20];
    printf("Enter the strlen");
    scanf("%s",&x);
    a= strlen(x);
    a=5;
    b=a-1;
    for(c=0;c<=a/2;c++)
    {
        if(x[c]!=x[b])
        {
            printf("\n not a palindrom");
            goto out;
        }
        b--;
    }
    printf("\n word in palindrome ");
    out:
    getch();
}