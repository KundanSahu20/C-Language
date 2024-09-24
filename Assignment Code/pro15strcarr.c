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
    struct student S[3];
    int i;
    for(i=0;i<3;i++)
    {
    printf("\nEnter Student Name %d= ",i+1);
    scanf("%s",&S[i].name);
    printf("\nEnter Student Roll Number= ");
    scanf("%d",&S[i].rollno);
    printf("\nEnter Student Marks Of Three Subject");
    printf("\nEnter Subject 1 Marks = ");
    scanf("%d",&S[i].m1);
    printf("\nEnter Subject 2 Marks = ");
    scanf("%d",&S[i].m2);
    printf("\nEnter Subject 3 Marks = ");
    scanf("%d",&S[i].m3);
    S[i].total=S[i].m1+S[i].m2+S[i].m3;
    S[i].percent=S[i].total/3;
    }
    for(i=0;i<3;i++)
    {
    printf("\n\n");
    printf("\nStudent Name %d= %s",i+1,S[i].name);
    printf("\nStudent Roll Number= %d",S[i].rollno);
    printf("\nStudent Three Subject Marks");
    printf("\nSubject 1= %d",S[i].m1);
    printf("\nSubject 2= %d",S[i].m2);
    printf("\nSubject 3= %d",S[i].m3);
    printf("\nTotal Marks of Subject= %d",S[i].total);
    printf("\nPercentage Of subjects= %f\n",S[i].percent);
    if( S[i].percent>59)
    printf("Passed First Division");
    else if (S[i].percent>45 && S[i].percent<=59)
    printf("Passed Second Division");
    else if (S[i].percent>33 && S[i].percent<=44)
    printf("Passed Third Division");
    else
    printf("FAIL");
    }
    getch();
}
