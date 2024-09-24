#include<stdio.h>
#include<conio.h>

void main()
{
    int x[10],i,j,k;
    printf("Enter 10 Number: "); // 9,8,7,6,5,4,3,2,1,0
    for ( i = 0; i < 10; i++)
    scanf("%d",&x[i]);
    for ( i = 0; i < 10; i++) 
    {
        for(j=0;j<10;j++)
        {
            if( x[j+1] < x[j])
            {
                k=x[j];
                x[j]=x[j+1];
                x[j+1]=k;
            }
        }
    }
    /* x[0]=9      if( x[0+1] < x[0]    )
       x[1]=8      if( x[1+1] < x[1]    )  
       x[2]=7      if( x[2+1] < x[2]    )
       x[3]=6      if( x[3+1] < x[3]    )
       x[4]=5      if( x[4+1] < x[4]    )
       x[5]=4      if( x[5+1] < x[5]    )
       x[6]=3      if( x[6+1] < x[6]    )
       x[7]=2      if( x[7+1] < x[7]    )
       x[8]=1      if( x[8+1] < x[8]    )
       x[9]=0      if( x[9+1] < x[9]    )

                k= x[9];
                x[9]=x[9+1];
                x[9+1]=k;
      */
    printf("\n ascending value: ");
    for(i=0;i<10;i++)
    printf("\n%d",x[i]);
    printf("\n");
    for ( i = 0; i < 10; i++) 
    {
        for(j=0;j<10;j++)
        {
            if( x[j+1] > x[j])
            {
                k=x[j];
                x[j]=x[j+1];
                x[j+1]=k;
            }
        }
    }

    printf("\n descending value: ");
    for(i=0;i<10;i++)
    printf("\n%d",x[i]);

    getch();    
    
}