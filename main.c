#include <stdio.h>
int main() 
{
  int distance;
  int order_value;
  scanf("%d %d", &distance, &order_value);
  if(distance <=0 || order_value <=0){
  printf("INVALID");
  }
  if(distance >= 500000 && order_value <= 15){
  printf("0");
  }
  else if(distance >= 1 && order_value <= 5){
  printf("15000");
  }
  else if(distance >= 6 && order_value <= 15){
  printf("25000");
  }
  else if(order_value >= 15){
  printf("40000"); 
  }
  return 0;
  }
  