#include<stdio.h>
int main(){
    float a,b,c,s_1,s_2,s_3,s_4,s_5;
    printf("enter the value of a :\n");
    scanf("%f",&a);
    printf("enter the value of b :\n");
    scanf("%f",&b);
    printf("enter the value of c :\n");
    scanf("%f",&c);
    s_1=a*a+2*a*b+b*b;
    printf("the value of s_1 is:%f\n",s_1);
    s_2=a*a-2*a*b+b*b;
    printf("the value of s_2:%f\n",s_2);
    s_3=a*a-b*b;
    printf("the value of s_3:%f \n",s_3);
    s_4=a*a+b*b;
    printf("the value of s_4:%f \n",s_4);
    s_5=(a*a)+(b*b)+(c*c)+2*a*b+2*b*c+2*c*a;
    printf("the value of s_5:%f \n",s_5);
}
