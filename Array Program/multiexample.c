#include<stdio.h>
#include<conio.h>
 void main()
 {
    int a,b,c;
    int x[2][2][2];
    for( a=0;a<2;a++)
    {
        printf("TABLE NUM %d=",a+1);
        for(b=0;b<2;b++)
        {
            for(c=0;c<2;c++)
            {
                scanf("%d",&x[a][b][c]);
            }
        }
    }
    for( a=0;a<2;a++)
    {
        printf("TABLE NUM %d=",a+1);
        for(b=0;b<2;b++)
        {
            for(c=0;c<2;c++)
            {
                printf("%d ",x[a][b][c]);
                if(c==1)
                printf("\n");
            }
        }
    }
  getch();   
 }