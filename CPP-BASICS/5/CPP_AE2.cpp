#include <iostream>
using namespace std;

// to print the no. in the decreasing oreder from n to 1
void decePrinter(int n)
{ // base statement
    if (n == 0)
    {
        return;
    }
    cout << n << " ";
    return decePrinter(n - 1); // tail recursion -- top to bottom manner
}

// to print the no. in the increasing oreder from 1 to n
void incPrinter(int n)
{ // base statement
    if (n == 0)
    {
        return;
    }
    incPrinter(n - 1); // non tail recursion --- bottom to top manner
    cout << n << " ";
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
// nth fabroncii number
int fibo(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return fibo(n - 1) + fibo(n - 2);
}
// sorted hai ki nhi array
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

// first occurence
void firstOccurence(int *arr2, int n, int target, int i)
{

    if (i == n)
    {
        cout << "number not found!!";
        return;
    }

    if (arr2[i] == target)
    {
        cout << "First occurrence of " << target << " is at index " << i;
        return;
    }

    firstOccurence(arr2, n, target, i + 1);
}
int lastOccurence(int *arr, int n, int target, int i)
{
    if (i == n)
    {
        return -1;
    }

    int indexInRest = lastOccurence(arr, n, target, i + 1);

    if (indexInRest != -1)
    {
        return indexInRest;
    }

    if (arr[i] == target)
    {
        return i;
    }

    return -1;
}

// calculating x^n in smart wayy !!

int power(int num, int expo)
{
    if (expo == 0)
    {
        return 1;
    }
    if (expo == 1)
    {
        return num;
    }
    int half = power(num, expo / 2);
    if (expo % 2 == 0)
    {
        return half * half;
    }
    else
    {
        return num * half * half;
    }
}
int main()
{
    int arr[] = {4, 5, 2, 7, 8, 9, 10, 1, 34, 66};
    int n = sizeof(arr) / sizeof(n);

    if (sortedAARR(arr, n))
        cout << "Array is sorted\n";
    else
        cout << "Array is not sorted\n";
    cout << endl;
    decePrinter(10);
    cout << endl;
    incPrinter(10);
    cout << endl;
    cout << sumNumber(5);
    cout << endl;

    int arr2[] = {4, 2, 6, 8, 8, 8, 2, 9};
    int size = sizeof(arr2) / sizeof(int);
    firstOccurence(arr2, size, 8, 0);
    cout << endl;
    int index = lastOccurence(arr2, n, 8, 0);
    cout << "Last occurrence is at index: " << index;
    cout << endl;

    cout << power(2, 20);
    return 0;
}