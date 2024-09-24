#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int main() {
    int (*operation)(int, int);  // Declaration of function pointer

    operation = add;  // Assigning the address of add function
    printf("Addition: %d\n", operation(3, 5));

    operation = subtract;  // Assigning the address of subtract function
    printf("Subtraction: %d\n", operation(10, 6));

    return 0;
}
