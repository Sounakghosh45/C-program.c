#include<stdio.h>
#define d(x) (x*x*x)
#define e(x,y) (x+y-x*x-y+x*x)

int main()
{
    int a = 5;
    printf("\n%d",e(a,a+5));
    printf("\n%d",d(a-1));
}
