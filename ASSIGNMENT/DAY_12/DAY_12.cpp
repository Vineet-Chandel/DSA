#include <iostream>
#include <climits>   // for INT_MAX
#include <algorithm> // for swap

using namespace std;
int main()
{

    int arr[] = {3, 5, 7, 9, 11, 14, 15, 20, 23, 25};
    int target;
    cout << "ENTER UR NUM :";
    cin >> target;
    int n = sizeof(arr) / sizeof(int);

    // linear search
    bool is_found = 0;
    for (int i = 0; i < n; i++)
    {
        if (target == arr[i])
        {
            cout << "Number is found in the array at the index : " << i << endl;
            is_found = 1;
        }
    }
    if (is_found == 0)
    {
        cout << "no. is not found in the array" << endl;
    }

    // binary search
    is_found = 0;
    int starter = 0;
    int ender = n - 1;
    while (starter <= ender)
    {
        int middler = (starter + ender) / 2;
        if (arr[middler] == target)
        {
            cout << "Number is found in the array at the index : " << middler << endl;
            is_found = 1;
            break;
        }
        if (arr[middler] > target)
        {
            ender = middler - 1;
        }
        if (arr[middler] < target)
        {
            starter = middler + 1;
        }
    }
    if (is_found == 0)
    {
        cout << "no. is not found in the array" << endl;
    }

    int my_arr[] = {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
    int size = sizeof(my_arr) / sizeof(int);

    // bubble sort
    // bubble sort
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (my_arr[j] > my_arr[j + 1])
            {
                swap(my_arr[j], my_arr[j + 1]);
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << my_arr[i] << ",";
    }
    cout << endl;

    int arr2[] = {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
    int size2 = sizeof(arr2) / sizeof(int);

    int index;

    // selection sort
    for (int i = 0; i < size2 - 1; i++)
    {
        int smal_elem = arr2[i];
        index = i;
        for (int j = i + 1; j < size2; j++)
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

    int arr3[] = {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
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

    return 0;
}