#include<stdio.h>
#include<conio.h>
#include<string.h>
void main ()
{
    char x[100];
    int a,b,c,d,i;
    printf("\nEnter Sentence = ");
    gets(x); // My name is kundan
    a=strlen(x); // 17
    for (b=a,c=a;b>=0;b--,c--) // b=17,c=17
    {
        if( x[b]==' ')
        {
        while (b<=a)
        {
            printf("%c",x[b]);
            b++;
        }
        b=c;
        a=c;
        }
    }
    getch();
    
}