#include <stdio.h>

int main() {
    struct complex {
        int real;
        int img;
    }c1,c2,c3;
    struct complex add;
    printf("Enter 1st real number:\n");
    scanf("%d",&c1.real);
printf("Enter 1st imaginary number:\n");
    scanf("%d",&c1.img);
printf("Enter 2nd real number:\n");
    scanf("%d",&c2.real);
printf("Enter 2nd imaginary number:\n");
    scanf("%d",&c2.img);
    c3.real=c1.real+c2.real;
    c3.img=c1.img+c2.img;
printf("New complex number:%d+%di\n",c3.real,c3.img);
}
    
