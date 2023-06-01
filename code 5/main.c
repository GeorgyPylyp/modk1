#include <stdio.h>
#include <math.h>
int main() {
  int a, b;
  float f ; // оголошення локальних змінних
  printf("\n величина a=");//виведення даних
  scanf("%d",&a); //введення даних
  printf("\n величина b=");
  scanf("%d",&b);
  f=(a*a-b*b)/(a*a+2*a*b+3*b*b+a+b);
  printf("\n Значення функції f=%.3f",f);
  return 0;
}