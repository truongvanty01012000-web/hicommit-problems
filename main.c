#include <stdio.h>

int main() {
  float w,h;
  scanf("%f","%f",&w,&h)
 float BMI= ((W/100)^2);
    if( BMI < 18.5)
      {
      printf("\nUNDERWEIGHT");}
    else if(18.5 =< BMI < 25 )
      {
      printf("\nNORMAL");}
    else if(25 =< BMI < 30)
      {
      printf("\OVERWEIGHT");}
    else if( BMI >= 30){
      printf("\OBESE");}  
    
  return 0;
}