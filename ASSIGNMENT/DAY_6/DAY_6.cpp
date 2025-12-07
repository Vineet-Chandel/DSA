#include <iostream>
using namespace std;
int main()
{

    // Pattern 1

    int n = 5;
    for (int i = 0; i <= n; i++)
    {
        int num = 1;
        for (int j = 0; j <= i; j++)
        {

            cout << num << " ";
            if (num == 1)
            {
                num--;
            }
            else
            {
                num++;
            }
        }
        cout << endl;
    }

    // Pattern 2

    int rows = 5;

    for (int i = 0; i < rows; i++)
    {
        // print leading spaces (to tilt the pattern)
        for (int s = 0; s < rows - i - 1; s++)
        {
            cout << " ";
        }

        // print stars
        for (int j = 0; j < 5; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    // patern 3
    int new_roqws = 5;

    for (int i = 0; i < new_roqws; i++)
    {
        for (int j = 0; j < new_roqws - i; j++)
        {
            cout << " ";
        }
        for (int k = i; k >= 1; k--)
        {
            cout << k;
        }
        for (int k = 2; k <= i; k++)
        {
            cout << k;
        }
        cout << endl;
    }

    return 0;
}