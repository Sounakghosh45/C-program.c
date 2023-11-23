#include<stdio.h>
int main(){
  int count=0;
char name[5]="HELLO";
for(int i=0;i<=5;i++){
if(name[i]=='\0'){
break;
}else{
count++
}
}
printf("%d",count);
}
