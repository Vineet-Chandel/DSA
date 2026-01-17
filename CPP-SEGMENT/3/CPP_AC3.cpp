// pattern printing using nested loops

#include <iostream>
using namespace std;
int main()
{

    //  *  *  *  *
    //  *  *  *  *
    //  *  *  *  *
    //  *  *  *  *
    int n1;
    cout << "Enter the number of rows for the wall patttern : ";
    cin >> n1;
    int n2;
    cout << "Enter the number of columns for the wall patttern : ";
    cin >> n2;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }

    //  *
    //  *  *
    //  *  *  *
    //  *  *  *  *

    int n3;
    cout << "Enter the number of rows for the lower & upper triangular patttern : ";
    cin >> n3;

    cout << "Lower Triangular Pattern: " << endl;
    for (int i = 0; i < n3; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }

    //  *  *  *  *
    //  *  *  *
    //  *  *
    //  *
    cout << "Upper Triangular Pattern: " << endl;
    for (int i = 0; i < n3; i++)
    {
        for (int j = n3 - i; j > 0; j--)
        {
            cout << " * ";
        }
        cout << endl;
    }

    int n4;
    cout << "Enter the number of rows for the  triangular patttern : ";
    cin >> n4;
    for (int i = 0; i < n4; i++)
    { // spaces
        for (int j = 0; j < n4 - i - 1; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}