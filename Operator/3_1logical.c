#include<stdio.h>
#include<conio.h>
void main()
{
    char gender;

    printf("Enter Gender(M/m/F/f)= ");
    scanf("%c",&gender);

    if (gender=='m'|| gender=='M')
     printf("Gender Is MALE");
    else if (gender=='f'|| gender=='F')
     printf("Gender Is FEMALE");
    else
    printf("Unspecified Gender");

    getch();

}