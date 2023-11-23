#include <stdio.h>

int main() {
    int size;

printf("Enter the size of array:\n");
scanf("%d",&size);
int s_1[size];
for(int i=0;i<size;i++){
    printf("Enter the element of index: %d\n",i);
    scanf("%d",&s_1[i]);
}
for(int i=0;i<size;i++){
    printf("%d",s_1[i]);
    printf(" ");
}
}
