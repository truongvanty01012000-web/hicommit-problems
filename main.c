#include <stdio.h>
 int gpa;
 int min;
  scanf("%d %d", &gpa, &min);
  if(gpa >= 8.0 || min >= 7.0){
  printf("EXCELLENT");
  }
  if(gpa >= 6.5 && min >= 5.0){
  printf("GOOD");
  }
  else if( gpa >= 5.0 && min >= 4.0){
  printf("PASS");
  }
  else 
  {
  printf("FAIL");
  }
  return 0;
}