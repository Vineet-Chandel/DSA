#include <stdio.h>

void factorial(int n)
{
    int long long fact = 1; // Use long long for larger factorials
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    printf("Factorial of %d is %lld\n", n, fact);
}

void table(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }
}

int main()
{

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    factorial(num);

    int num_2;
    printf("Enter a number for multiplication table: ");
    scanf("%d", &num_2);
    table(num_2);
    return 0;
}