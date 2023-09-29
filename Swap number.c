#include<stdio.h>
int main (){
  int a,b,c;
printf("Enter two numbers:\n");
scanf("%d %d",&a,&b);
printf("Before swapping a=%d,b=%d\n",a,b);
c=a;
a=b;
b=c;
printf("After swapping a=%d b=%d",a,b);
}
