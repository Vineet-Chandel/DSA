#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);

    // ===============================
    // Max SUBARRAYS SUM  !
    // ===============================
    // approach O(n^2)
    int strt_p = 0;
    int sum = 0;
    int max_sum = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            int sum = 0;
            sum += arr[j];

            if (max_sum < sum)
            {
                max_sum = sum;
            }

            cout << ":" << sum;
            cout << ",";
        }
        cout << endl;
    }

    return 0;
}