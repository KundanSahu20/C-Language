#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    int x[3][2][2];
    for(a=0;a<3;a++)
    {
        printf("Enter 9 Value in Table %d = ",a+1);
        for(b=0;b<2;b++)
        {
            for(c=0;c<2;c++)
            {
                scanf("%d",&x[a][b][c]);
            }
        }
    }
    for(a=0;a<3;a++)
    {
        printf("\n Value of Table %d",a+1);  
        printf("\n");

        for(b=0;b<2;b++)
        {
            for(c=0;c<2;c++)
            {
                printf("%d    ",x[a][b][c]);
                if(c==1)
                printf("\n");
            }
        }
    }
    getch();
}