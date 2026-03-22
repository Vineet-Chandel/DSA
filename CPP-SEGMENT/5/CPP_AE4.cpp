#include <iostream>
using namespace std;
int mergeSort(int arr[], int size)
{
    int strt = 0;
    int end = size - 1;

    int mid = (strt + end) / 2;

    int left[mid + 1];
    int right[mid + 1];

    for (int i = 0; i < mid; i++)
    {
        if (i < mid)
        {
            left[i] = arr[i];
        }
        else
        {
            right[i - mid] = arr[i]
        }
    }

    
}
int main()
{

    int n = sizeof(arr) / sizeof(int);
    int arr[] = {6, 3, 5, 7, 2, 4};
    mergeSort(arr, n);
    return 0;
}