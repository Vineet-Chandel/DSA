#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int i = 1;
    bool increasing = true;

    while (true)
    {
        for (int j = 0; j < i; j++)
            cout << "*";

        cout << endl;

        if (increasing)
        {
            if (i == n)
                increasing = false;
            else
                i++;
        }
        else
        {
            if (i == 1)
                break;
            else
                i--;
        }
    }

    return 0;
}