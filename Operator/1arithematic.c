#include<stdio.h>
#include<conio.h>

void main()
{
    int A,B,C,D,E,F,G;

    printf("ENTER TWO NUMBER= ");
    scanf("%d%d",&A,&B);
    C=A+B;
    D=A-B;
    E=A*B;
    F=A/B;
    G=A%B;
    printf("\nValue OF A & B=%d & %d",A,B);
    printf("\nAddition of given Value =%d",C);
    printf("\nSubtration of given Value =%d",D);
    printf("\nMultiplication of given Value =%d",E);
    printf("\nDivision of given Value =%d",F);
    printf("\nModulus of given Value =%d",G);
    getch();

}