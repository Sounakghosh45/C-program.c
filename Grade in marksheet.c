
#include<stdio.h>
int main(){
    float marks;
    printf("enter the marks:");
    scanf("%f",&marks);
    if(marks>=90){
        printf("Grade=A\n");
    }else if (marks>=80){
        printf("Grade=B");
    }else if (marks>=70){
        printf("Grade=C");
    }else if (marks>=60){
        printf("Grade=D");
    }else if (marks>=50){
        printf("Grade=E");
    }else {
        printf("Grade=F");
    }
}
