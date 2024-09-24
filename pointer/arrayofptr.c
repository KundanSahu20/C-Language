#include<stdio.h>
#include<conio.h>
void main ()
{
    int i,j;
    int x1[5]={2,3,4,6,1},x2[5]={11,12,13,14,15},x3[5]={29,27,25,24,23},x4[5]={10,20,30,40,50};
    int *p[4];
    p[0]=&x1;
    p[1]=&x2;
    p[2]=&x3;
    p[3]=&x4;

    for ( i = 0; i < 4; i++)
    {
        printf("\n\nValue Of Array %d",i+1);
        for ( j = 0; j < 5; j++)
        {
            printf("\nValue of x%d[%d]=%d",i+1,j,p[i][j]);
        }
        
    }
    getch();
    
}