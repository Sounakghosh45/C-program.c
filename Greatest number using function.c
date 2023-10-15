#include <stdio.h>

int grt(int a,int b){
    if(a>b){
        printf("A is greater than B\n");
    }
    else{
        printf("B is greater than A");
    }
}
int main(){
    int a,b;
    printf("Enter the value of A:\n");
    scanf("%d",&a);
    printf("Enter the value of B:\n");
    scanf("%d",&b);
    grt(a,b);
    
}
