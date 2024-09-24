#include <stdio.h>
#include <conio.h>
void main()
{
    int x = 5;
    float y = 3.14;
    void *ptr;

    ptr = &x;
    printf("Value of ptr =%d\n", *(int*)ptr);  // prints 5
    ptr = &y;
    printf("Value of ptr =%f\n", *(float*)ptr);  // prints 3.14

    getch();
}
