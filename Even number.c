#include <stdio.h>

int main() {
  int start,stop;
  printf("Enter the start and stop:\n");
  scanf("%d %d",&start,&stop);
  while(start<stop){
 if(start%2==0){
     printf("%d is even number:\n",start );
 }
 start++;
  }
}
