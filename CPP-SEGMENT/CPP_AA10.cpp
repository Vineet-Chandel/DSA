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
        int key = arr3[i];
        int j = i - 1;
        while (j >= 0 && (arr3[j] > key))
        {
            arr3[j + 1] = arr3[j];
            j--;
        }
        arr3[j + 1] = key;
    }

    for (int i = 0; i < size3; i++)
    {
        cout << arr3[i] << ",";
    }
    cout << endl;
    // ===============================
    // Count Sort
    // ===============================

    int arrCount[] = {4, 2, 4, 5, 7, 9, 10, 8, 7, 6};

    int maxValue = INT_MIN, minValue = INT_MAX;
    int n = sizeof(arrCount) / sizeof(int);
    for (int i = 0; i < n; i++)
    {
        maxValue = max(arrCount[i], maxValue);
        minValue = min(arrCount[i], minValue);
    }

    int freq[maxValue];
    for (int i = 0; i <= maxValue; i++)
    {
        freq[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        freq[arrCount[i]]++;
    }
    for (int i = minValue, j = 0; i <= maxValue; i++)
    {

        while (freq[i] > 0)
        {
            arrCount[j++] = i;
            freq[i]--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arrCount[i];
    }

    return 0;
}