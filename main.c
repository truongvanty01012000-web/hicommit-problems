#include <stdio.h>
int main() 
{
  int distance;
  int order_value;
  scanf("%d %d", &distance, &order_value);
  if(distance <=0 || order_value <=0){
  printf("INVALID");
  }
  else if(order_value >= 15 && distance <= 500000){
  printf("0");
  }
  else if(distance >= 5 && distance <= 1){
  printf("15000");
  }
  else if(distance >= 15 && distance <= 6){
  printf("25000");
  }
  else if( distance < 500000  && distance > 15){
  printf("40000"); 
  }
  return 0;
  }
  