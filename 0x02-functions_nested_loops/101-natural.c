#include<stdio.h>
int main()
{
    long unsigned int i,sum=0;
    clrscr();
    for(i=0;i<=10024;i++)
    {
        if((i%5==0)||(i%3==0))
        {
            sum=sum+1;
        }
    }
    printf("%d\n",sum);
    getchar();
    return 0;
}
