#include <iostream>
using namespace std;
int main()
{
    // ===============================
    // BASIC FOR LOOP
    // ===============================

    // Print numbers from 1 to 5
    for (int i = 1; i <= 5; i++)
    {
        cout << "i = " << i << "\n";
    }

    cout << "Loop finished.\n";

    // ===============================
    // BASIC WHILE LOOP
    // ===============================

    int i = 1; // initialization before loop

    // Print numbers from 1 to 5
    while (i <= 5)
    { // condition checked first
        cout << "i = " << i << "\n";
        i++; // update inside the loop
    }

    cout << "Loop finished.\n";
    // ===============================
    // BASIC DO-WHILE LOOP
    // ===============================
    int pin;

    // User gets at least one attempt to enter PIN
    do
    {
        cout << "Enter 4-digit PIN: ";
        cin >> pin;
    } while (pin != 1234); // condition checked after body

    cout << "Access granted.\n";

    // ==========================================
    // NESTED FOR LOOPS
    // Example: print a rectangle of stars
    // ==========================================

    int rows = 3;
    int cols = 5;

    for (int i = 1; i <= rows; i++)
    { // outer loop: rows
        for (int j = 1; j <= cols; j++)
        { // inner loop: columns
            cout << "* ";
        }
        cout << "\n"; // new line after each row
    }

    // ==========================================
    // NESTED WHILE LOOPS
    // Example: number pattern
    // ==========================================

    int n = 4;
    int i = 1;

    while (i <= n)
    { // controls rows
        int j = 1;
        while (j <= i)
        { // controls numbers in each row
            cout << j << " ";
            j++;
        }
        cout << "\n";
        i++;}

        return 0;
    }
