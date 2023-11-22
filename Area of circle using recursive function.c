
#include<stdio.h>
int area(int r){
    printf("Enter the radius of circle:\n");
    scanf("%d",&r);
  float ar=3.14*r*r;
  printf("The area of the circle:%f\n",ar);
  area(r);
    
}
int main(){
    int r;
    
    area(r);
}
