#include<stdio.h>

int main(){
    int range;
    printf("Enter the range:\n");
    scanf("%d",&range);
    for(int i=1;i<=range;i++){
        for(int j=1;j<=10;j++){
            printf("%d*%d=%d\n",i,j,i*j);
        }
        printf("___________________\n");
    }
}
