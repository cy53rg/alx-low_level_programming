#include <stdio.h>

void fibonacci(int n)
{
  int f1 = 0, f2 = 1, c;
  if (n<1)
  {
    printf(f1);
  }
  for ( c=0;c<=n;c++)
  {
    printf(f2);
    int f3=f1+f2;
    f1=f2;
    f2=f3;
  }
    
    
