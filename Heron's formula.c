#include <stdio.h>
#include<math.h>
int main()
{
  float a,b,c,s,ar;
  printf("Enter the value of three side A,B and C:\n");
  scanf("%f %f %f",&a,&b,&c);
  s=(a+b+c)*0.5;
  ar=sqrt(s*(s-a)*(s-b)*(s-c));
  printf("The area of the triangle is=%f",ar);

    
}
