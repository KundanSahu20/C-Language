#include<stdio.h>
#include<conio.h>
void  main()
{
    float hindi,english,physics,chemistry,maths,percentge;
    int total;

    printf("Enter Marks Of  hindi,english,physics,chemistry,maths Subject:-  ");
    scanf("%f%f%f%f%f",&hindi,&english,&physics,&chemistry,&maths);
    total= (hindi+english+physics+chemistry+maths);
    printf("Total Marks Obtained=%d\n",total);
    percentge=total/5;
    printf("Percentage Obtained= %f\n",percentge);
    if(percentge>80 && percentge<=100)
     printf("Passed in merit \n");
    else if(percentge>=60 && percentge<=80)
     printf("Passed in first division\n");
    else if (percentge>=45 && percentge<=59)
     printf("Passed in second division\n");
    else
     printf("FAIL\n");

    getch();

}