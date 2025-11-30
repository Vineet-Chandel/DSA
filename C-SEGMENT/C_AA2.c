#include <stdio.h>

int main() {
    signed short int num1;
    printf("signed short int ---- %zu\n", sizeof(num1));
    short int num2;
    printf("short int ---- %zu\n", sizeof(num2));
    signed int num3;
    printf("signed int ---- %zu\n", sizeof(num3));
    int num4;
    printf("int ---- %zu\n", sizeof(num4));
    signed long int num5;
    printf("signed long int ---- %zu\n", sizeof(num5));
    long int num6;
    printf("long int ---- %zu\n", sizeof(num6));
    signed long long int num7;
    printf("signed long long int ---- %zu\n", sizeof(num7));
    long long int num8;
    printf("long long int ---- %zu\n", sizeof(num8));
    unsigned short int num9;
    printf("unsigned short int ---- %zu\n", sizeof(num9));
    unsigned int num10;
    printf("unsigned int ---- %zu\n", sizeof(num10));
    unsigned long int num11;
    printf("unsigned long int ---- %zu\n", sizeof(num11));
    unsigned long long int num12;
    printf("unsigned long long int ---- %zu\n", sizeof(num12));


    unsigned short int numm_1 = 32769;
    printf("%hi \n", numm_1);
    unsigned short int numm_2 = 65534;
    printf("%hu \n", numm_2);
    unsigned short int numm_3 = 65538;
    printf("%hu \n", numm_3);
    return 0;
}
