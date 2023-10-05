#include <stdio.h>

int main() {
    int sideLength;

    printf("Enter the side length of the square: ");
    scanf("%d", &sideLength);

    for (int i = 1; i <= sideLength; i++) {
        for (int j = 1; j <= sideLength; j++) {
            if (i == 1 || i == sideLength || j == 1 || j == sideLength) {
                // Print an asterisk for the first and last rows, and for the first and last columns
                printf("* ");
            } else {
                // Print a space for the inner part of the square
                printf("  ");
            }
        }
        // Move to the next row
        printf("\n");
    }

    return 0;
}
