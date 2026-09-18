#include <iostream>
using namespace std;

// Here we will see the various methods how to pass the array in the another function

// Tradational Way

void tadational(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

// Modern Way

template <size_t N>

void modern(int (&arr)[N])
{
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{

    int arr[] = {1, 4, 24, 2342, 22, 2};
    int size = sizeof(arr) / sizeof(int);

    tadational(arr, size);
    modern(arr);

    return 0;
}