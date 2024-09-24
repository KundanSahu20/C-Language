#include <stdio.h>
int global_var = 10;

int main(void) 
{
    int local_var = 20;

    printf("Inside main():\n");
    printf("global_var = %d\n", global_var);
    printf("local_var = %d\n", local_var);

    int result = some_function(local_var);
    printf("result = %d\n", result);

    return 0;
}
int some_function(int arg)
{
    printf("Inside some_function():\n");
    printf("global_var = %d\n", global_var);
    printf("arg = %d\n", arg);

    global_var *= 2;

    return arg * 2;
}
