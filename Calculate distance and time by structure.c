#include <stdio.h>

int main() {
    struct distance {
        int foot;
        int ins;
        int min;
    }c1,c2,c3;
    struct complex ;
    
    printf("Enter 1st distance foot:\n");
    scanf("%d",&c1.foot);
printf("Enter 2nd distance foot:\n");
    scanf("%d",&c2.foot);
printf("Enter 1st distance inches:\n");
    scanf("%d",&c1.ins);
    printf("Enter 2nd distance inches:\n");
    scanf("%d",&c2.ins);
    printf("Enter 1st min:\n");
    scanf("%d",&c1.min);
printf("Enter 2nd min:\n");
    scanf("%d",&c2.min);
c3.foot=c1.foot+c2.foot;
c3.ins=c1.ins+c2.ins;
c3.min=c1.min+c2.min;
int hour=0;
if(c3.ins>12){
    c3.ins=c3.ins-12;
    c3.foot++;
}
if(c3.min>60){
    c3.min=c3.min-60;
    hour++;
}
printf("total foot:%d total inches:%d total hour,min:%d,%d",c3.foot,c3.ins,hour,c3.min);
    
}
    
