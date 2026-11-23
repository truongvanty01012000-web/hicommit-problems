#include <stdio.h>
int main() 
{
  double d;
  double tien;
  scanf("%lf %lf", &d, &tien);
  if( d <= 1 ){
  printf("\ntien %d, d*15000");
  }
  else if( d <= 5){
  printf("\ntien %d, 1*15000+(d-1)*13000);
  }
  else if( d > 5 ){
  printf("\ntien %d, 1*15000+4*13000+(d-5)*11000");
  }
  return 0;
}