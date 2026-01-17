// ==========================================
// BASIC FUNCTION: DECLARATION + DEFINITION + CALL
// ==========================================

#include <iostream>
using namespace std;

// 1) Function declaration (prototype)
int add(int a, int b); // tells the compiler this function exists

int main()
{
    int x = 5, y = 7;

    // 3) Function call
    int sum = add(x, y); // pass x and y to the function
    cout << "Sum = " << sum << "\n";
    cout << x << "and" << y; // call by falue funtion hai no aftereffects!!

    return 0;
}

// 2) Function definition (actual body)
int add(int a, int b)
{
    int result = a + b;
    int temp = a;
    a = b;
    b = temp;
    return result; // return an int
}
