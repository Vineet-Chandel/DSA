// MY APPROACH ---- O(m*n)
#include <iostream>
using namespace std;
int main()
{
    vector<int> original = {1, 2, 3, 4};
    int m;
    int n;

    int size = original.size();

    if (m * n != size)
    {
        return {};
    }

    vector<vector<int>> result(m, vector<int>(n));

    int index = 0;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            result[i][j] = original[index];
            index++;
        }
    }

    // Print 2D array
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
