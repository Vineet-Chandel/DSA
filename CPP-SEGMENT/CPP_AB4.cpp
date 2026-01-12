#include <iostream>
using namespace std;
int main()
{

    // spiral matrixxxx
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    // boundary traversing karenge !!
    int strRow = 0, strCol = 0, endRow = 3, endCol = 3;

    // top
    while (strRow <= endRow && strCol <= endCol)
    {

        for (int j = strCol; j <= endCol; j++)
        {
            cout << matrix[strRow][j];
        }

        // right

        for (int j = strRow + 1; j <= endRow; j++)
        {
            cout << matrix[j][endCol];
        }

        for (int j = endCol - 1; j >= strCol; j--)
        {
            cout << matrix[endRow][j];
        }

        // left

        for (int j = endRow - 1; j >= strRow + 1; j--)
        {
            cout << matrix[j][strCol];
        }
        strRow++;
        strCol++;
        endRow--;
        endCol--;
    }

    return 0;
}