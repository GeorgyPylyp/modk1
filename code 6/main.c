#include <stdio.h>
int main() {
 float f;
 int x;
 printf("\n перше число x=");
  scanf("%d",&x); 
 if(x>0){f=x*x+4*x+5;}
 if(x>0){printf("f=%f",f);}
 if(x<=0){f=1/(x*x+4*x+5);}
 if(x<=0){printf("f=%f",f);}
  return 0;
}