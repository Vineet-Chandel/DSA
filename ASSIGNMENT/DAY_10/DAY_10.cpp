#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> nums = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};

    int size_vec = nums.size();
    cout << size_vec;

    for (int i = 0; i < size_vec; i++)
    {
        for (int j = i + 1; j < size_vec; j++)
        {
            if (nums[i] == nums[j])
            {
                return true;
            }
        }
    }

    return false;
}