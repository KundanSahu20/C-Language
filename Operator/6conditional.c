#include<stdio.h>
#include<conio.h>
void main()
{
 int x,y,z;
 printf("ENTER OF VALUE: ");
 scanf("%d%d",&x,&y);
 z=(x>=y)?printf("X Number is bigger than y"):printf("Y Number is bigger than x"); // ( any condition )? (if condition true):(else condition false);
getch();

}