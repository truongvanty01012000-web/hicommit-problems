#include <stdio.h>

int main() {
  float a,w,h;
  scanf("%f","%f",&w,&h)
  a = w/((h/100)*(h/100));
    if(a < 18.5){
      printf("\nUNDERWEIGHT");}
    else if(a < 25 )
      {
      printf("\nNORMAL");}
    else if(a < 30)
      {
      printf("\OVERWEIGHT");}
    else if(a > 30){
      printf("\OBESE");}  
  }
  return 0;
}