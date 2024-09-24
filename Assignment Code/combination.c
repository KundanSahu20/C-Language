#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("\nCombination of 1 2 3 :-");
    for ( a = 1; a <= 3; a++)
    {
        for ( b = 1; b <= 3; b++)
        {
            for ( c = 1; c <= 3; c++)
            {
            if( a!=b && b!=c && a!=c)
            printf("\n%d %d %d",a,b,c);
            }
        }
        
    }
    getch();
}