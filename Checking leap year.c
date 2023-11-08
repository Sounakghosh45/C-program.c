#include<stdio.h>
int main(){
    int year,b;
    printf("Enter the year:\n");
    scanf("%d",&year);
    b=year%4;
    if(b==0)
    printf("The year is leapyear:");
    else
    printf("The year is not leapyear:");
}
