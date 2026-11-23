#include <stdio.h>
int main()
{
  int d,m,n,y;
  scanf("%d%d%d", &d &m &n &y);
  if( m<1 && m>12)
  {
    printf("VALIN");
  }
  else (y <= 0 )
    {
    printf("INVALID");
  }
  else 
   if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m=12)
      n=31;
   else if ( m==4|| m==6 || m==9 || m==11)
      n=30; 
   else if ( mm==2)
   {
     if(y%400 == 0 || y%4 == 0 && (y%4 100 != 0))
     n= 29;
     else 
     n= 28;
   }
if (d >= 1&& d<= n)
  printf ( VALIN);
else
  printf (INVALIN);
  return 0;
}