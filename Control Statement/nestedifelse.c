#include<stdio.h>
#include<conio.h>
void  main()
{
    int a,b,c;
    printf("Enter Three Number :- ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
     if(a>c)
     printf("Number a is greater number %d",a);
    else
     printf("Number c is greater number %d",c);
    }

    else
    {
      if( b>c )
     printf("Number b is greater number %d",b);
     else
     printf("Number c is greater number %d",c);
    }
    getch();
    
}