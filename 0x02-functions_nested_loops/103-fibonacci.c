#include "main.h"
#include <stdio.h>

void fibonnaci()
{
  int f1,f2,f3;
  f1=0;
  f2=1;
  f3=f1+f2;
 printf("%d/n"f1);
  while (f3<4000000)
  {
    if (f3%2==0)
    {
      printf("%d/n"f3);
    }
    f3=f1+f2;
    f1=f2;
    f2=f3;
  }
  return 0;
}
    
    
