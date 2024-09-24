#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    FILE *f,*q;
    char x,y;
    f=fopen("bca1.txt","w");
    printf("\nEnter The Sentence= ");
    while((x=getchar())!=EOF)
    {
        putc(x,f);
    }
    fclose(f);
    q=fopen("bca2.txt","w");
    f=fopen("bca1.txt","r");
    while((x=getc(f))!=EOF)
    {
        putc(x,q);
    }
    fclose(f);
    fclose(q);
    q=fopen("bca2.txt","r");
    while((x=getc(q))!=EOF)
    {
        printf("%c",x);
    }
    getch();
}