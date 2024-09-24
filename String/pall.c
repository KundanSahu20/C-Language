#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    int a,b,c;
    char x[20];
    printf("\nEnter The String=");
    scanf("%s",&x);
    a=strlen(x);
    b=a-1;
    for( c=0;c<=a/2;c++)
    {
        if( x[c]!=x[b])
        {
            printf("\nNot palindrome");
            goto l1;
        }
        b--;
    }
    printf("\nPalindrome ");
    l1:
    getch();

}