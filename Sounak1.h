#include<stdio.h>
int main (){
  int a=5;
int b=10;
int c=15;
int d=20;
int e=25;
printf("a=%d,%p\n",a,&a);
printf("b=%d,%p\n",b,&b);
printf("c=%d,%p\n",c,&c);
printf("d=%d,%p\n",d,&d);
  printf("e=%d,%p\n",e,&e);
printf("Enter the new value of e:\n");
scanf("%d",&e);
printf("\n The new value of e=%d",e);
}
