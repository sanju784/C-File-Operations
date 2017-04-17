/**
*  Preprocessor Program in C
*/

#define PI 3.14
#define AREA(x) (PI*x*x)

#include<stdio.h>
void main() {
  int r1 = 2, r2 = 3;
  float a;
  a = PI*r1*r1;
  printf("\n%f", a);
  a = PI*r2*r2;
  printf("\n%f", a);
  a = AREA(4);
  printf("\n%f", a);
}