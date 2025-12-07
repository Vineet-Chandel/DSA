#include <iostream>
using namespace std;
int main()
{
//question 1
    float num;
    cout << "please enter the numbber";
    cin >> num;
    cout << "the number you entered is " << num << endl;

    if (num > 0)
    {
        cout << "the number is positive" << endl;
    }
    else if (num < 0)
    {
        cout << "the number is negative" << endl;
    }
    else
    {
        cout << "the number is zero" << endl;
    }

    //question 2
    int year;   
    cout << "please enter the year";
    cin >> year;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        cout << year << " is a leap year" << endl;
    }
    else
    {
        cout << year << " is not a leap year" << endl;
    }       
    
    return 0;
}