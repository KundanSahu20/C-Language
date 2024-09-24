#include<stdio.h>
#include<conio.h>
struct student
{
    char ename[50];
    int eid;
    struct date
    {
        int dd,mm,yy;
    }D;   
};
void main()
{
    struct student S;
    printf("\nEnter Employee Name= ");
    gets(S.ename);
    printf("\nEnter ID of Employee= ");
    scanf("%d",&S.eid);
    printf("\nDate of Joining(dd/mm/yy) = ");
    scanf("%d%d%d",&S.D.dd,&S.D.mm,&S.D.yy);


    printf("\nEmployee Name= %s",S.ename);
    printf("\nEmployee ID= %d",S.eid);
    printf("\nJoining Date= %d/%d/%d",S.D.dd,S.D.mm,S.D.yy);
    getch();
}