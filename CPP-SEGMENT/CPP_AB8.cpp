#include <iostream>
using namespace std;

// to print the no. in the decreasing oreder from n to 1
void decePrinter(int n)
{ // base statement
    if (n == 0)
    {
        return;
    }
    cout << n << endl;
    return decePrinter(n - 1); // tail recursion -- top to bottom manner
}
// to print the no. in the increasing oreder from 1 to n
void decePrinter(int n)
{ // base statement
    if (n == 0)
    {
        return;
    }
    decePrinter(n - 1); // non tail recursion --- bottom to top manner
    cout << n << endl;
}
// to get the sum of all the no. for m
int sumNumber(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + sumNumber(n - 1);
}

int fibo(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return fibo(n - 1) + fibo(n - 2);
}

bool sortedAARR(int *array, int size)
{
    if (size == 1)
    {
        return true;
    }
    if (array[size - 1] < array[size - 2])
    {
        return false;
    }

    return sortedAARR(array, size - 1);
}
int main()
{
    int arr[] = {4, 5, 2, 7, 8, 9, 10, 1, 34, 66};
    int n = sizeof(arr) / sizeof(n);

    if (sortedAARR(arr, n))
        cout << "Array is sorted\n";
    else
        cout << "Array is not sorted\n";

    decePrinter(50);
    cout << sumNumber(5);
    return 0;
}