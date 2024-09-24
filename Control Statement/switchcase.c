#include<stdio.h>
#include<conio.h>
void  main()
{
    int hindi,english,physics,chemistry,maths,total,p1;
    float percentge;

    printf("Enter Marks Of  hindi,english,physics,chemistry,maths Subject:-  ");
    scanf("%d%d%d%d%d",&hindi,&english,&physics,&chemistry,&maths);
    total= (hindi+english+physics+chemistry+maths);
    printf("Total Marks Obtained=%d\n",total);
    percentge=total/5;
    printf("Percentage Obtained= %f\n",percentge);
    p1=percentge/10;
    switch (p1)
    {
    case 9:
    case 8:
    printf("\n Passed with Merit");
    break;

    case 7:
    case 6:
    printf("\n Passed with first Division");
    break;

    case 5:
    case 4:
    printf("\n Passed with Second Division");
    
    default: printf("\n FAIL");
        break;
    }

    getch();

}