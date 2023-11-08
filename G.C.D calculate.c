
#include <stdio.h>

int main() {
int num1,num2,i,gcd;
printf("Enter the value of num1,num2:\n");
scanf("%d %d",&num1,&num2);
for(i=1;i<=num1&&i<=num2==i;++i){
    if(num1%i==0&&num2%2==0)
    gcd=i;
}
printf("G.C.D is:%d",gcd);
}
