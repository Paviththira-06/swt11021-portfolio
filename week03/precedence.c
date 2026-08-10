#include <stdio.h>

int main()
{
    printf("%d\n", 2 + 3 * 4);
    printf("%d\n", (2 + 3) * 4);
    printf("%d\n", 10 / 2 + 3);
    printf("%d\n", 10 / (2 + 3));
    printf("%d\n", 5 > 3 && 2 < 4);
    printf("%d\n", 5 > 3 || 2 > 4);
    printf("%d\n", !(5 == 5));

    return 0;
}