#include <stdio.h>
#include<math.h>

int main() {
 int a,b,c;
 printf("Enter the three side A,B and C:\n");
 scanf("%d %d %d",&a,&b,&c);
 int d=pow(a,2)+pow(b,2);
 int e=pow(c,2);
 if(d==e)
 {
     printf("It is a right angle triangle");
 }
 else 
 {
     printf("It is not right angle triangle");
 }
 
}
