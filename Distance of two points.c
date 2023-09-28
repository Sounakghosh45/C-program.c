#include <stdio.h>
#include<math.h>
int main (){
 float a,b,c,d,x,y,dist;
printf("Enter value of the points A,B,C and D:\n");
  scanf("%f %f %f %f",&a,&b,&c,&d);
  x=a-c;
  y=b-d;
dist=sqrt(pow(x,2)+pow(y,2));
printf("The distance between two points is=%f",dist);
}
