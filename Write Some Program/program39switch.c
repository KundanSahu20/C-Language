#include<stdio.h>
#include<conio.h>

void main()
{
    char x;
    printf("\nEnter the character :");
    scanf("%c",&x);

    switch (x)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    printf("\n%c is vowel character",x);
        break;
    
    default:
        printf("\n%c is constant character",x);
        break;
    }
    getch();
}