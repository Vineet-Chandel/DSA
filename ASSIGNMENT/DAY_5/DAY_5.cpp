#include <iostream>
using namespace std;

// q1 Factorial
void factorial(int n)
{
    int long long fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    cout << "Factorial of " << n << " is " << fact << endl;
}
// q2 Multiplication Table
void table(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        cout << n << " * " << i << " = " << n * i << endl;
    }
}
// q3 Armstrong Number
void amsrtorng(int n)
{
    int count = 0, temp = n;
    while (temp != 0)
    {
        count++;
        temp /= 10;
    }

    int sum = 0;
    temp = n;
    while (temp != 0)
    {
        int digit = temp % 10;
        temp /= 10;
        sum += pow(digit, count);
    }
    if (sum == n)
    {
        cout << n << " is an Armstrong number." << endl;
    }
    else
    {
        cout << n << " is not an Armstrong number." << endl;
    }
}

void fab(int n)
{
    int t1 = 0, t2 = 1, t3;
    cout << "Fibonacci Series: " << t1 << ", " << t2;
    for (int i = 0; i < n; i++)
    {
        t3 = t1 + t2;
        cout << ", " << t3;
        t1 = t2;
        t2 = t3;
    }
}

int main()
{

    int num;
    cout << "Enter a number for factorial calc : ";
    cin >> num;
    factorial(num);

    int num_2;
    cout << "Enter a number for multiplication : ";
    cin >> num_2;
    table(num_2);

    int num_3;
    cout << "Enter a number to check if it is an Armstrong number: ";
    cin >> num_3;
    amsrtorng(num_3);

    int num_4;
    cout << "Enter a number to check if it is an fabroccai number: ";
    cin >> num_4;
    fab(num_4);
    return 0;
}