#include <stdio.h>

int main() {
    // Syntax Error: Missing semicolon
    printf("Hello, world!")
    
    // 
    // Logical Error
    int a = 5;
    int b=6;
    int c=a+b*a
printf("%d",c);

    // Runtime Error: Accessing an out-of-bounds array element
    int arr[3] = {1, 2, 3};
    int value = arr[5];

    
}
