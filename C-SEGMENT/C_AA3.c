#include <stdio.h>
int main()
{

    float num_1;
    printf("float ---- %zu\n", sizeof(num_1));
    double num_2;
    printf("double ---- %zu\n", sizeof(num_2));
    long double num_3;
    printf("long double ---- %zu\n", sizeof(num_3));
    return 0;
}