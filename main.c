#include <stdio.h>
int main() 
{
  double d, tien;
  scanf("%lf %d");
  if( d <= 1 ){
  printf("\ntien, d*15000");
  }
  else if( d <= 5){
  printf("\ntien, 1*15000+(d-1)*13000);
  }
  else ( d > 5 ){
  printf("\ntien, 1*15000+4*13000+(d-5)*11000");
  }
  return 0;
}