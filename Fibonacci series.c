#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            printf("  ");
        }

        // Print increasing numbers
        for (int j = i; j >= 1; j--) {
            printf("%d ", j);
        }

        // Print decreasing numbers (palindrome part)
        for (int j = 2; j <= i; j++) {
            printf("%d ", j);
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
