#include <iostream>
using namespace std;
int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);
    // ===============================
    // SUBARRAYS !
    // ===============================

    // approach O(n ^ 3)
    // printing elements = O(n³)
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            for (int k = j; k < size; k++)
            {
                cout << arr[k];
            }
            cout << ",";
        }
        cout << endl;
    }

    // if we have to take out the subarrays coun there is the complexity of the o(n2)
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            count++;
        }
    }
    cout << "Total subarrays in this particular arry is " << count;

    // ===============================
    // Max SUBARRAYS SUM  !
    // ===============================

    // approach O(n^3)
    // int max_sum = INT_MIN;
    // for (int i = 0; i < size; i++)
    // {
    //     for (int j = i; j < size; j++)
    //     {
    //         int sum = 0;
    //         for (int k = i; k <= j; k++)
    //         {
    //             sum += arr[k];
    //             cout << arr[k];
    //         }

    //         if (max_sum < sum)
    //         {
    //             max_sum = sum;
    //         }

    //         cout << ":" << sum;
    //         cout << ",";
    //     }
    //     cout << endl;
    // }

    // cout << "maximum subarray sum :" << max_sum;
    int sum;
    int maxSum = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            sum = 0;
            for (int k = j; k < size; k++)
            {
                sum = sum + arr[k];
            };
            maxSum = max(sum, maxSum);
        }
        }
    cout << "maximum subarry sum :" << maxSum;
    return 0;
}