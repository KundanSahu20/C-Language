#include<stdio.h>
#include<conio.h>
void main()
{
    char x;
    printf("Enter Single Chatacter:- ");
    scanf("%c",&x);

    switch(x)
    {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':printf("\n%c is vowel character ",x);
        break;
        default:printf("\n%c is consonant character ",x);
        break;
    }
    getch();
}