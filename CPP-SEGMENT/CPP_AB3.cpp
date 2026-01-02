#include <iostream>
using namespace std;
int main()
{

    // ===========
    // 2-D ARRAYS
    // ===========
    // input
    int arr[10][3];
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
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i == j)
            {
                cout << arr[i][j];
            }
        }
        cout << endl;
    }
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
    // SPIRAL MATRIX (pyq) -- next file
    // ==========================================
    return 0;
}