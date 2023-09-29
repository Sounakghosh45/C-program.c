#include <stdio.h>
#include<math.h>

int main()
{
int a,b,s;
printf(" Enter the value of S:\n");
scanf("%d",&s);
a=sqrt(s);
b=a*a;
if(b==a){
    printf("This is a perfect square ",s);
}
else{
    printf("This is not a perfect square",s);
}
}
