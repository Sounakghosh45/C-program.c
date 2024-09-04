#include<stdio.h>
#include<math.h>
float fun(float x){
    return x*x*x-2*x-5;
}
int main (){
    float a,b,c;
    float fa,fb,fc;
    int i=0;
    float err=0.0001;
    printf("enter the interval 1");
    scanf("%f",&a);
    printf("enter the interval 2");
    scanf("%f",&b);
    while (fabs(b-a)>=err){
        fa= fun(a);
        fb=fun(b);
        c=a-(fa/(fb-fa))*(b-a);
        fc=fun(c);
        if(fc==0){
        printf("C is the root: %f",c);
        break;
        }
        else if(fa*fc<0){
            b=c;
        }
        else{
            a=c;
        }
        i++;
    }
    printf("%f is root:",c );
}