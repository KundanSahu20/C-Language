#include<stdio.h>
#include<conio.h>
int findMax(int *a, int *b, int *c);

int findMax(int *a, int *b, int *c) 
{
  int max = *a;  // Assume that a is the largest number
  
  if (*b > max) {
    max = *b;
  }
  
  if (*c > max) {
    max = *c;
  }
  
  return max;
}

int main()
{
  int a, b, c;
  
  printf("Enter three numbers: ");
  scanf("%d %d %d", &a, &b, &c);
  
  int max = findMax(&a, &b, &c);
  
  printf("The largest number is: %d\n", max);
  
  return 0;
}
