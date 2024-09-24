#include <stdio.h>
#include<conio.h>

void main() {
  int a = 100;
  int *p;
  int **pp;
  p = &a; 
  pp = &p;
  printf("a = %d\n", *p);
  printf("a = %d\n", **pp);
  getch();
}
