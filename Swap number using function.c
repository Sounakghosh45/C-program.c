
#include<stdio.h>

int swap(int a, int b){
int temp;
temp=a; 
a=b;
b=temp;
printf("After swapping: A= %d and B= %d",a,b); }
int main(){

int a,b;
 printf("Enter the value of A: \n");
scanf("%d", &a);
printf("Enter the value of B:\n");
scanf("%d", &b);
printf("Before swapping: A= %d and B= %d\n",a,b);
swap(a,b);
}
