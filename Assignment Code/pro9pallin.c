#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    int i,j,k;
    char a[100];
    printf("\nEnter The Word to check pallindrome or not = ");
    gets(a);
    i= strlen(a);
    j=i-1;
    k=0;
    while(k<=i/2)
    {
        if(a[k]!=a[j])
        {
            printf("\nWord is Not Pallindrome");
            goto out;
        }
        k++;
        j--;
    }
    printf("\nWord is Pallindrome");
    out:
    getch();
}