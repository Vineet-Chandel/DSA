#include <iostream>
using namespace std;
int main()
{
    // ===============================
    // BUY AND SELL STOCKS
    // ===============================
    // possible in beeter complexity!!
    int arr[] = {7, 1, 5, 3, 6, 4};
    int size = sizeof(arr) / sizeof(int);

    for (int i = 0; i < size; i++)
    {
        int onDay_price = arr[i];
        int max_profit = 0;
        bool loss = true;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] > onDay_price)
            {
                int diff = arr[j] - onDay_price;
                max_profit = max(max_profit, diff);
                loss = false;
            }
        }

        if (loss)
        {
            cout << "for the stock price :" << onDay_price
                 << " there is no further profit!" << max_profit << endl;
        }
        else
        {
            cout << "for the stock price :" << onDay_price
                 << " this the maximum profit of :" << max_profit << endl;
        }
    }

    // ===============================
    // Trapping the rain water!!
    // ===============================

    int height[] = {1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int n = sizeof(height) / sizeof(int);
    int left_max[20000];
    left_max[0] = height[0];

    int right_max[20000];
    right_max[n - 1] = height[n - 1];

    int min_arr[20000];

    for (int i = 1; i < n; i++)
    {
        left_max[i] = max(left_max[i - 1], height[i - 1]);
    };
    cout << endl;
    for (int i = n - 2; i >= 0; i--)
    {
        right_max[i] = max(right_max[i + 1], height[i]);
    }
    cout << endl;
    int waterTrapped = 0;
    for (int i = 0; i < n; i++)
    {
        min_arr[i] = min(left_max[i], right_max[i]) - height[i];
        if (min_arr[i] < 0)
        {
            min_arr[i] = 0;
        }
        else
        {
            waterTrapped += min_arr[i];
        }
        };
    cout << waterTrapped;

    return 0;
}