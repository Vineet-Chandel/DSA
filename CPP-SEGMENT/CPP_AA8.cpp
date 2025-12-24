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

    int max_sum = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        int sum = 0;
        for (int j = i; j < size; j++)
        {

            sum += arr[j];
            max_sum = max(max_sum, sum);
        }
    }
    cout << max_sum << endl;

    // ===============================
    // Kadanes algorithm! (addition)
    // ===============================
    int curr_sum = 0;
    int max_sumN = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        curr_sum += arr[i];
        max_sumN = max(max_sumN, curr_sum);
        if (curr_sum < 0)
        {
            curr_sum = 0;
        }
    }
    cout << max_sumN << endl;

    // ===============================
    // Kadanes algorithm! (multiplication)
    // ===============================

    int arr[] = {-3, -1, -1};
    int size = sizeof(arr) / sizeof(int);
    int max_prod = arr[0];
    int min_prod = arr[0];

    int ans = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < 0)
        {
            swap(max_prod, min_prod);
        }
        max_prod = max(arr[i], max_prod * arr[i]);
        min_prod = min(arr[i], min_prod * arr[i]);

        ans = max(ans, max_prod);
    }

    cout << ans;
    return 0;
}