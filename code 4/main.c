#include <stdio.h>
int main(void) {int n;
  printf("\n Введіть номер місяця n="); 
  scanf("%d",&n);
  switch(n){
     case 1 :
    printf("\n  Січень");
    break;
    case 2 :
    printf("\n Лютий");
    break;
    case 3 :
    printf("\n  Березень");
    break;
    case 4 :
    printf("\n  Квітень");
    break;
    case 5 :
    printf("\n  Травень");
    break;
    case 6 :
    printf("\n Червень");
    break;
    case 7 :
    printf("\n  Липень");
    break;
    case 8 :
    printf("\n Серпень");
    break;
    case 9 :
    printf("\n  Вересень");
    break;
    case 10 :
    printf("\n  Жовтень");
    break;
    case 11 :
    printf("\n Листопад");
    break;
    case 12 :
    printf("\n Грудень");
    break;
  }
  if (n>12){printf(" Помилка: Введіть значення від 1 до 12");}      if (n<=0){printf(" Помилка: Введіть значення від 1 до 12");}  
  return 0;}