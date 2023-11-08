#include <stdio.h>

int main() {
    int a = 5, b = 3;
    int x = 12, y = 7;
    int p = 1, q = 0;

    // Relational Operators
    printf("Relational Operators:\n");
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);

    // Bitwise Operators
    printf("\nBitwise Operators:\n");
    printf("x & y: %d\n", x & y);   // Bitwise AND
    printf("x | y: %d\n", x | y);   // Bitwise OR
    printf("x ^ y: %d\n", x ^ y);   // Bitwise XOR
    printf("~x: %d\n", ~x);         // Bitwise NOT
    printf("x << 1: %d\n", x << 1); // Left shift
    printf("y >> 1: %d\n", y >> 1); // Right shift

    // Logical Operators
    printf("\nLogical Operators:\n");
    printf("p && q: %d\n", p && q); // Logical AND
    printf("p || q: %d\n", p || q); // Logical OR
    printf("!p: %d\n", !p);         // Logical NOT

    return 0;
}
