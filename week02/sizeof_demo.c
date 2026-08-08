/*print size of bytes*/
/*Declare variables of all types*/

#include <stdio.h>

int main(void)
{
    printf("char: %zu bytes\n",sizeof(char));
    printf("short: %zu bytes\n",sizeof(short));
    printf("int: %zu bytes\n",sizeof(int));
    printf("long: %zu bytes\n",sizeof(long));
    printf("long long: %zu bytes\n",sizeof(long long));
    printf("float: %zu bytes\n",sizeof(float));
    printf("double: %zu bytes\n",sizeof(double));
    printf("long double: %zu bytes\n",sizeof(long double));
    return 0;
}
