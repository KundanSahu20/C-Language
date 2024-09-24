#include<stdio.h>
#include<conio.h>

void main()
{
    int A=10,C,D,E,F;
    C=A++; // post increment fist process than increment
    printf("\nVALUE OF C=%d",C);
    A=30;
    D=A--;
    printf("\nVALUE OF D=%d",D);
    A=55;
    E=++A; // pre incrent fist increment than process
    printf("\nVALUE OF E=%d",E);
    A=44;
    F=--A;
    printf("\nVALUE OF F=%d",F);

    getch();

}