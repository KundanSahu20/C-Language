#include<stdio.h>
#include<conio.h>
void main()
{
    int a=2;
    printf("VALUE OF a normal = %d\n",a);

    a+=2; // a=a+2  a=4
    printf("VALUE OF a addition = %d\n",a);

    a-=2; //a=a-2  a=2
    printf("VALUE OF a subtration = %d\n",a);

    a*=2; // a=a*2  a=4
    printf("VALUE OF a multiplication = %d\n",a);


    a/=2;// a=a/2 a=2
    printf("VALUE OF a division = %d\n",a);

    a%=3; // a=a%2  a=0
    printf("VALUE OF a modulas = %d\n",a);

getch();

}