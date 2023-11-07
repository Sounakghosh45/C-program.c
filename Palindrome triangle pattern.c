#include <stdio.h>

int main() {
    int rows, i, j, num = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        // Print spaces before numbers
        for (j = 1; j <= rows - i; j++) {
            printf("  ");
        }

        // Print increasing numbers
        for (j = 1; j <= i; j++) {
            printf("%2d", num++);
            printf(" ");
        }

        printf("\n");
    }

    
}
