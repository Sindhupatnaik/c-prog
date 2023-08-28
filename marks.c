#include <stdio.h>

void main()
{
  int m1,m2,m3;
  float avg;
  printf("enter marks 1:");
  scanf("%d", & m1);
   printf("enter marks 2:");
  scanf("%d", & m2);
   printf("enter marks 3:");
  scanf("%d", & m3);
  avg=(m1+m2+m3)/3;
  if (avg>85)
  {
      printf("high achiever");
  }
  else if (avg>=70 && avg<=85)
  {
      printf("passed");
  }
  else if (avg<70){
      printf("needs imp");
  }
}
  
