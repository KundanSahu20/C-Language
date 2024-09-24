#include<stdio.h>
#include<conio.h>
void main()
{
    int a=30,b=30,c=35,result;

    printf("a=%d & b=%d & c=%d\n",a,b,c);

    //Logical AND ( && )

    result=(a == b) && (c > b); // ( a equal to b) and (c is greater than b)
    printf("(a==b)&&(c>b) is %d\n",result);

    result=(a == b) && (c < b); // (a equal to b) and ( c is less than b)
    printf("(a==b)&&(c<b) is %d\n",result);

    //Logical OR ( || )

    result=(a == b) || (c < b); //(a equal to b) or ( c is less than b)
    printf("(a==b)||(c<b) is %d\n",result);

    result=(a != b) || (c < b); //(a is not equal to b) or ( c is less than b)
    printf("(a!=b)||(c<b) is %d\n",result);

    // Logical NOT( ! )

    result= !(a != b); // not (a not equal to b)
    printf("!(a!=b) is %d\n",result);

    result= !(a <= c); // not(a equal to b)
    printf("!(a<=c) is %d\n",result);

    getch();
}