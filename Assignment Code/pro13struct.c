#include<stdio.h>
#include<conio.h>
struct student
{
    char name[50];
    int rollno;
    int m1,m2,m3,total;
    float percent;
};
void main()
{
    struct student S;
    printf("\nEnter Student Name= ");
    gets(S.name);
    printf("\nEnter Student Roll Number= ");
    scanf("%d",&S.rollno);
    printf("\nEnter Student Marks Of Three Subject");
    printf("\nEnter Subject 1 Marks = ");
    scanf("%d",&S.m1);
    printf("\nEnter Subject 2 Marks = ");
    scanf("%d",&S.m2);
    printf("\nEnter Subject 3 Marks = ");
    scanf("%d",&S.m3);
    S.total=S.m1+S.m2+S.m3;
    S.percent=S.total/3;
    printf("\nStudent Name= %s",S.name);
    printf("\nStudent Roll Number= %d",S.rollno);
    printf("\nStudent Three Subject Marks");
    printf("\nSubject 1= %d",S.m1);
    printf("\nSubject 2= %d",S.m2);
    printf("\nSubject 3= %d",S.m3);
    printf("\nTotal Marks of Subject= %d",S.total);
    printf("\nPercentage Of subjects= %f\n",S.percent);
    if( S.percent>59)
    printf("Passed First Division");
    else if (S.percent>45 && S.percent<=59)
    printf("Passed Second Division");
    else if(S.percent>33 && S.percent<=44)
    printf("Third Division");
    else
    printf("FAIL");
    getch();
}
