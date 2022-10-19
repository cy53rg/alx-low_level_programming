#include "main.h"
#include <stdio.h>

void _abs(int a)
{
    if (a<0)
    {
    a = a*(-1);
    }
   
    return (a);
}

int main(void)
{
    int r;

    r = _abs(-1);
    printf("%d\n", r);
    r = _abs(0);
    printf("%d\n", r);
    r = _abs(1);
    printf("%d\n", r);
    r = _abs(-98);
    printf("%d\n", r);
    return (0);
}
