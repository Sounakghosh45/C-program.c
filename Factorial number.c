#include <stdio.h>

int main() {
    int i,num,f=1;
    printf("Enter the number:\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
   f=f*i;
   printf("Factorial of %d is=%d",num,f);
}
