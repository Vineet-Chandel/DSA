#include <iostream>
using namespace std;

template <size_t N>
void printArray(int (&arr)[N], int num)
{

    switch (num)
    {
    case 1:
    {
        cout << "BubbleSort : ";
        break;
    }
    case 2:
    {
        cout << "OptimiseBubbleSort : ";
        break;
    }
    case 3:
    {
        cout << "SelectionSort : ";
        break;
    }
    default:
    {
        break;
    }
    }
    for (int i = 0; i < N; i++)
    {
        cout << arr[i];
    }

    cout << endl;
}
template <size_t N>
void BubbleSort(int (&arr)[N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    printArray(arr, 1);
}
template <size_t N>
void OptimiseBubbleSort(int (&arr)[N])
{

    for (int i = 0; i < N; i++)
    {
        bool is_sorted = true;
        for (int j = 0; j < N - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                is_sorted = false;
                swap(arr[j], arr[j + 1]);
            }
        }

        if (is_sorted)
        {
            break;
        }
    }

    printArray(arr, 2);
}

template <size_t N>
void SelectionSort(int (&arr)[N])
{

    for (int i = 0; i < N; i++)
    {
        int minIndex = i;
        for (int j = i; j < N; j++)
        {
            if (arr[minIndex] > arr[j])
            {
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);
    }

    printArray(arr, 3);
}
template <size_t N>
void InsertionSort(int (&arr)[N])
{

    for (int i = 0; i < N; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            if (arr[i + 1])
        }
    }
}

int main()
{

    int arr[] = {5, 1, 2, 4, 3};

    BubbleSort(arr);
    OptimiseBubbleSort(arr);
    SelectionSort(arr);

    return 0;
}