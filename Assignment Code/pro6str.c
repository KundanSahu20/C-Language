#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int a,b,c,d,e;
    char x[100];
    printf("\nEnter the sentence = ");
    gets(x);
    a=strlen(x);
    b=0;
    c=0;
    d=0;
    while(b<=a)
    {
        if(x[b]=='a'||x[b]=='e'||x[b]=='i'||x[b]=='o'||x[b]=='u'||x[b]=='A'||x[b]=='E'||x[b]=='I'||x[b]=='O'||x[b]=='U')
        {
            c++;
        }
        if(x[b]==' ')
        {
            d++;
        }
        b++;
    }
    printf("\nTotal Number of character in sentence = %d",a);
    printf("\nTotal Number of Vowel in sentence= %d",c);
    printf("\nTotal Number of Consonants in sentence= %d",a-c-d);
    printf("\nTotal Number of Words in sentence= %d",d+1);
    getch();
}