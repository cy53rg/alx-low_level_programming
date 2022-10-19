#include "main.h"


void times_table(void)
{

int a,b,prod;
/*generating multiplication table*/

    for (a=0;a<=9;a++)
    {
        for (b=0;b<=9;b++)
        {
                prod = a*b;
                 return prod;
        }
    }
   
    return 0;
}
