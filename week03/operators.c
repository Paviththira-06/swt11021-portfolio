/*Operators — Arithmetic, Bitwise, Precedence Practice */

#include <stdio.h>

int main()
{
    int a = 15;
    int b = 4;
    int c = 0;

    // Arithmetic operators
    printf("a + b  = %d\n", a + b);
    printf("a - b  = %d\n", a - b);
    printf("a * b  = %d\n", a * b);
    printf("a / b  = %d\n", a / b);
    printf("a %% b = %d\n", a % b);

    // Relational operators
    printf("a == b = %d\n", a == b);
    printf("a != b = %d\n", a != b);
    printf("a > b  = %d\n", a > b);
    printf("a < b  = %d\n", a < b);
    printf("a >= b = %d\n", a >= b);
    printf("a <= b = %d\n", a <= b);

    // Logical operators
    printf("a && b = %d\n", a && b);
    printf("a || b = %d\n", a || b);
    printf("!a     = %d\n", !a);
    printf("!c     = %d\n", !c);

    // Bitwise operators
    printf("a & b  = %d\n", a & b);
    printf("a | b  = %d\n", a | b);
    printf("a ^ b  = %d\n", a ^ b);
    printf("~a     = %d\n", ~a);
    printf("a << 2 = %d\n", a << 2);
    printf("a >> 1 = %d\n", a >> 1);

    // Conditional operator
    printf("a > b ? a : b = %d\n", a > b ? a : b);

    return 0;
}