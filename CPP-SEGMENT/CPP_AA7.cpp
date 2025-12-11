#include <iostream>
using namespace std;
int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);

    // ===============================
    // SUBARRAYS !
    // ===============================

    // approach O(n^3)
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            // print prefix from i to j
            for (int k = i; k <= j; k++)
            {
                cout << arr[k];
            }
            cout << ",";
        }
        cout << endl;
    }

    // ===============================
    // Max SUBARRAYS SUM  !
    // ===============================

    // approach O(n^3)
    int max_sum = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
                cout << arr[k];
            }

            if (max_sum < sum)
            {
                max_sum = sum;
            }

            cout << ":" << sum;
            cout << ",";
        }
        cout << endl;
    }

    cout << "maximum subarray sum :" << max_sum;

    return 0;
}