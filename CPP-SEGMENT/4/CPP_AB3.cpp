#include <iostream>
using namespace std;
int main()
{

    // ===========
    // 2-D ARRAYS
    // ===========
    // input
    int arr[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;
    // output
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    // output of the diagonal element

    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i == j)
            {
                sum += arr[i][j];
                cout << arr[i][j];
            }
            else if (j == 4 - i - 1)
            {
                sum += arr[i][j];
                cout << arr[i][j];
            }
            cout << endl;
        }
        cout << endl;
    }

    // diagonal element sum
    cout << "you diagonal element toatal sum is = " << sum;

    cout << endl;

    // uprr wala taam jhaamm in good comnplexity!!
    cout << "sorted tarikeeee!!! : ";
    int sum2 = 0;
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i][i];
        sum2 += arr[i][i];

        if (i != 4 - i - 1)
        {
            cout << arr[i][4 - i - 1];
            sum2 += arr[i][4 - i - 1];
        }
    }
    cout << "you diagonal element toatal sum is = " << sum2;
    cout << endl;

    // transpose
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i == j)
            {
                cout << arr[i][j] << " ";
            }
            else
            {
                cout << arr[j][i] << " ";
            }
        }
        cout << endl;
    }
    cout << endl;

    // ==========================================
    // searching a key in CLOUMNwise AND  ROW WISE SORTED

    // ==========================================

    int matrix[4][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}};

    int meraBanda = matrix[0][3];

    int target;
    cout << "please enter the no. you want to find";
    cin >> target;

    int mereBandeRow = 0;
    int mereBandeColl = 3;

    int CorrdX = 0;
    int CorrdY = 3;

    while (true)
    {
        if (target > matrix[CorrdX][CorrdY])
        {
            CorrdX++;
        }
        else if (target < matrix[CorrdX][CorrdY])
        {
            CorrdY--;
        }
        else if (target == matrix[CorrdX][CorrdY])
        {
            cout << "target found at the X :" << CorrdX << "Y :" << CorrdY;
            break;
        }
    }

    // ==========================================
    // SPIRAL MATRIX (pyq) -- next file
    // ==========================================
    return 0;
}