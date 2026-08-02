#include <stdio.h>
union Data
{
    int i;
    float f;
    char c;
};
int main()
{
    union Data d;
    d.i = 10;
    printf("i = %d\n", d.i);

    d.f = 3.14;
    printf("f = %.2f\n", d.f);
    return 0;
}

// Accessing a member other than the last assigned gives garbage value