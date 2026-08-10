#include <stdio.h>

int main()
{
    double a, b;

    printf("Enter first number: ");
    scanf("%lf", &a);

    printf("Enter second number: ");
    scanf("%lf", &b);

    printf("\nCalculator Results\n");
    printf("----------------------------\n");

    printf("Addition       : %.2f\n", a + b);
    printf("Subtraction    : %.2f\n", a - b);
    printf("Multiplication : %.2f\n", a * b);

    printf("Division       : %s", "");

    b != 0
        ? printf("%.2f\n", a / b)
        : printf("Cannot divide by zero\n");

    printf("Modulus        : ");

    if ((int)b != 0)
    {
        printf("%d\n", (int)a % (int)b);
    }
    else
    {
        printf("Cannot calculate modulus by zero\n");
    }

    return 0;
}