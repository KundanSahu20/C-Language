#include<stdio.h>
#include<conio.h>
void main()
{
    int a=100, *p=&a;
    float b=79.56, *q=&b;
    char c='k', *r=&c;
    char d='A', *s=&d;

    printf("\n Value of P=Address of a = %u",p);
    printf("\n Value of q=Address of b = %u",q);
    printf("\n Value of r=Address of c = %u",r);
    printf("\n Value of s=Address of d = %u",s);
    p=p+3;
    q=q-5;
    r++;
    s--;
    printf("\n Now Value of p= %u",p);
    printf("\n Now Value of q= %u",q);
    printf("\n Now Value of r = %u",r);
    printf("\n Now Value of s = %u",s);
    
    getch();
}
