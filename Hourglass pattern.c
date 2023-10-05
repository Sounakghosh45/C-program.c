#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of rows in the hourglass: ");
    scanf("%d", &n);

    // Print the top half of the hourglass
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j < i; j++) {
            printf(" ");
        }
        // Print asterisks
        for (int j = 1; j <= 2 * (n - i) + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Print the bottom half of the hourglass
    for (int i = n - 1; i >= 1; i--) {
        // Print spaces
        for (int j = 1; j < i; j++) {
            printf(" ");
        }
        // Print asterisks
        for (int j = 1; j <= 2 * (n - i) + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
