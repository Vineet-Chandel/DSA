#include <iostream>
using namespace std;
int main()
{
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    // boundary traversing karenge !!
    int strRow = 0, strCol = 0, endRow = 3, endCol = 3;

    for (int i = 0; i <= strRow; i++)
    {
        for (int j = strCol; j <= endCol; j++)
        {
            cout << matrix[i][j];
        }
    }

    // top
    // right
    // bottom
    // left
    return 0;
}