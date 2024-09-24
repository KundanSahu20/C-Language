
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char x[100];
    int a,b,c=0,d=0,e;

    printf("\nEnter Sentence=");
    gets(x);
    a=0;
    while( x[a]!='\0')
    {
        for( b=0;b<=a;b++)
        {
            if(x[b]==' ')
            {
                c++;
            }
            if ( x[b]=='A'|| x[b]=='E'||x[b]=='I'||x[b]=='U'||x[b]=='O'||x[b]=='a'||x[b]=='e'||x[b]=='i'||x[b]=='u'||x[b]=='o')
            {
                d++;
            }
        }
    }
    e=a-(c+d);
    printf("\nNumber Of Character sentence = %d",a);
    printf("\nNumber Of Word = %d",c+1);
    printf("\nNumber Of Vowel= %d",d);
    printf("\nNumber Of Constant = %d",e);
    printf("\nNumber Of Space = %d",c);
    getch();
}