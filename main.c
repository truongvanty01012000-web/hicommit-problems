#include <stdio.h>

int main() {
  float w,h;
  scanf("%f",&w)
  scanf("%f",&h)
 float BMI;
  BMI= w/((h/100)*(h/100))
    if( BMI < 18.5f)
      {
      printf("\nUNDERWEIGHT");}
    else if(18.5f =< BMI < 25f )
      {
      printf("\nNORMAL");}
    else if(25f =< BMI < 30f)
      {
      printf("\OVERWEIGHT");}
    else if( BMI >= 30f){
      printf("\OBESE");}  
  }
  return 0;
}