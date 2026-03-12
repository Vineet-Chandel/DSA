#include <iostream>
using namespace std;
int main()
{
    //1
    int arr[2][3] = {{4, 7, 8}, {8, 8, 7}};
    int count = 0;
    for (int i = 0; i <= 2; i++)
    {
        for (int d = 0; d <= 3; d++)
        {
            if (arr[i][d] == 7)
            {
                count++;
            }
        }
    }
    cout << "No. of count:" << count << endl;

    //2
    int nums[3][3] = {{1, 4, 9}, {11, 4, 3}, {2, 2, 3}};

    int row = 2;
    int sum = 0;
    for (int i = 0; i <= 3; i++)
    {
        for (int d = 0; d <= 3; d++)
        {
            if (row == 2)
            {
                sum += nums[row][d];
            }
        }
    }
    cout << "Sum of the element in the second row  :" << sum << endl;
    return 0;
}