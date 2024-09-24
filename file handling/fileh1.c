#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    FILE *f;
    char x,y;
    f=fopen("bca.txt","a");
    printf("\nEnter The Sentence= ");
    while((x=getchar())!=EOF)
    {
        putc(x,f);
    }
    fclose(f);
    f=fopen("bca.txt","r");
    while((x=getc(f))!=EOF)
    {
        printf("%c",x);
    }
    fclose(f);
    getch();
}