#include<stdio.h>

int main(){

int temp=1,i,j,k,limit; printf("Enter the limit: \n");
scanf("%d", &limit);
for (i=limit;i>=1;i--){ for(j=1;j>=1;j--){
printf(" ");
} 
for (k=1;k<=temp; k++) {
 printf("* ");
}
printf("\n"); temp++;

}
}
