#include<stdio.h>
#include<conio.h>
void  main()
{
    int a,b;
    printf("Enter Year To Check Leap Year or Not :- ");
    scanf("%d",&a);
    b=a%4;
    if(b==0)
     printf("Entered Year Is Leap Year ");
    else
     printf("Entered Year Is Not Leap Year");
    getch();
    
}