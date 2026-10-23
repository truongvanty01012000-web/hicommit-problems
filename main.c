#include <stdio.h>

int main() {
 double w,h;
  float a;
  scanf("%lf","%lf",&w,&h)
  a = w/((h/100)*(h/100));
    if(a < 18.5)
      printf("UNDERWEIGHT");
    else if(a < 25 )
      
      printf("NORMAL");
    else if(a < 30)
      
      printf("OVERWEIGHT");
  else
      printf("OBESE");}  
  }
  return 0;
}