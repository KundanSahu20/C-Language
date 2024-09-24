#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    int x[2][3][3];
    for(a=0;a<2;a++)
    {
        printf("Enter 9 Value in Table %d = ",a+1);
        for(b=0;b<3;b++)
        {
            for(c=0;c<3;c++)
            {
                scanf("%d",&x[a][b][c]);
            }
        }
    }
    printf("\n VALUE OF TABLE");
    for(a=0;a<2;a++)
    {
        printf("\n Value of Table %d",a+1);        
        for(b=0;b<3;b++)
        {
            printf("\n");
            for(c=0;c<3;c++)
            {
                printf("%d    ",x[a][b][c]);
            }
        }
    }
    getch();
}