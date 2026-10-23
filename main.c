#include <stdio.h>

int main() {
  float dtb
  scanf ("%f", &dtb);
  if( dtb>= 9){
  printf("A\n");}
  else if(dtb >= 8){
  printf("B+\n");}
  else if( dtb >= 6){
  printf("C+\n");}
  else if( dtb >= 5.5){
  printf("C\n");}
  else if( dtb >= 5){
  printf("D+\n");}
  else if( dtb >= 4){
  printf("D\n");}
  else if( dtb < 4){
  printf("F\n");}
  return 0;
}