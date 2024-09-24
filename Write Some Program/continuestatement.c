// Program to calculate the sum of numbers (10 numbers max)
// If the user enters a negative number, it's not added to the result

#include <stdio.h>
int main() {
   int i;
   float number, sum = 0.0;

   for (i = 1; i <= 10; i++) {
      printf("Enter a n%d: ", i);
      scanf("%f", &number);

      if (number < 0.0) {
         continue;
      }

      sum += number; // sum = sum + number;
   }

   printf("Sum = %f", sum);

   return 0;
}