#include <iostream>
using namespace std;
int main()
{
    // ===============================
    // Bubble Sort
    // ===============================
    int arr[] = {5, 4, 1, 3, 2};
    int size = sizeof(arr) / sizeof(int);
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ",";
    }

    // rev

    // for (int i = 0; i < size - 1; i++)
    // {
    //     for (int j = 0; j < size - i - 1; j++)
    //     {
    //         if (arr[j] > arr[j + 1])
    //         {
    //             swap(arr[j], arr[j + 1]);
    //         }
    //     }
    // }
    cout << endl;
    // ===============================
    // Selection Sort
    // ===============================
    int arr2[] = {5, 4, 1, 3, 2};
    int size2 = sizeof(arr2) / sizeof(int);

    int index;
    for (int i = 0; i < size2 - 1; i++)
    {
        int smal_elem = INT_MAX;
        for (int j = i; j < size2; j++)
        {
            if (smal_elem > arr2[j])
            {
                smal_elem = arr2[j];
                index = j;
            }
        }
        swap(arr2[i], arr2[index]);
    }
    for (int i = 0; i < size2; i++)
    {
        cout << arr2[i] << ",";
    }

    // rev
    // int index21;
    // for (int i = 0; i < size2; i++)
    // {
    //     int smaaller = INT_MAX;
    //     for (int j = i + 1; j < size2; j++)
    //     {
    //         smaaller = min(arr[j], smaaller);
    //         index21 = j;
    //     }
    //     swap(arr2[i], arr2[index]);
    // }
    cout << endl;

    // ===============================
    // Insertion Sort
    // ===============================
    int arr3[] = {5, 4, 1, 3, 2};
    int size3 = sizeof(arr3) / sizeof(int);

    for (int i = 1; i < size3; i++)
    {
        int curr = arr3[i];
        int prev = i - 1;

        // shift elements
        while (prev >= 0 && arr3[prev] > curr)
        {
            arr3[prev + 1] = arr3[prev];
            prev--;
        }

        // insert element at correct position
        arr3[prev + 1] = curr;
    }

    for (int i = 0; i < size3; i++)
    {
        cout << arr3[i] << ",";
    }
    return 0;
}