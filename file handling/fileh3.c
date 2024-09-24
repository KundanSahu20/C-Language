#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{
    int sid;
    char sname[50];
    float per;
};
void main()
{
    FILE *fp;
    int i;
    struct student s1;
    
    fp=fopen("student1.txt","w");
    printf("\nEnter Data of Student");
    printf("\nName Of Student = ");
    scanf("%s",&s1.sname);
    printf("\nID Of Student = ");
    scanf("%d",&s1.sid);
    printf("\nPercent Of Student = ");
    scanf("%f",&s1.per);
    fwrite(&s1,sizeof s1,1,fp);
    fclose(fp);
    fp=fopen("student1.txt","r");
    fread(&s1,sizeof s1,1,fp);
    printf("\nID of Student=%d",s1.sid);
    printf("\nName of Student=%s",s1.sname);
    printf("\nPercent of Student=%f",s1.per);
    fclose(fp);
    getch();
}