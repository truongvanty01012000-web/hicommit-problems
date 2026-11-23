#include <stdio.h>
 double gpa, min;
 int abs;
  scanf("%d %d %d",&abs &gpa, &min);
  if(abs > 3){
    printf("FAIL_ATTENDANCE")
  }
  if(gpa >= 8.0 || min >= 7.0){
    printf("EXCELLENT");
  }
  else(min < 4.0){
    printf("FAIL_SUBJECT");
  }
  else if(gpa >= 6.5 && min >= 5.0){
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