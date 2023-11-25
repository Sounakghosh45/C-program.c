#include <stdio.h>
#include <math.h>
int main()
{
double n,result;
printf("Enter Number:");
scanf("%lf",&n);
result = log(n);
printf("The Logarithm of %.2lf is %lf\n",n, result);
}
