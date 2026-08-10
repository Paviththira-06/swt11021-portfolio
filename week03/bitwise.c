#include <stdio.h>

int main()
{
    int a, b;

    // Pair 1
    a = 12;
    b = 10;

    printf("Pair 1: a = %d, b = %d\n", a, b);
    printf("a & b  = %d\n", a & b);
    printf("a | b  = %d\n", a | b);
    printf("a ^ b  = %d\n", a ^ b);
    printf("a << 1 = %d\n", a << 1);

    printf("\n");

    // Pair 2
    a = 255;
    b = 170;

    printf("Pair 2: a = %d, b = %d\n", a, b);
    printf("a & b  = %d\n", a & b);
    printf("a | b  = %d\n", a | b);
    printf("a ^ b  = %d\n", a ^ b);
    printf("a << 1 = %d\n", a << 1);

    printf("\n");

    // Pair 3
    a = 63;
    b = 36;

    printf("Pair 3: a = %d, b = %d\n", a, b);
    printf("a & b  = %d\n", a & b);
    printf("a | b  = %d\n", a | b);
    printf("a ^ b  = %d\n", a ^ b);
    printf("a << 1 = %d\n", a << 1);

    return 0;
}