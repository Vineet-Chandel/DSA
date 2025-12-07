#include <iostream>
using namespace std;

void palindrone_dec(int num)
{
    int final_digit = 0, temp = num, count = 0;
    while (temp != 0)
    {
        temp /= 10;
        count++;
    }
    temp = num;
    while (temp != 0)
    {
        final_digit += (temp % 10) * pow(10, count - 1);
        temp /= 10;
        count--;
    }

    if (final_digit == num)
    {
        cout << "The number " << num << " is a palindrone number." << endl;
    }
    else
    {
        cout << "The number " << num << " is not a palindrone number." << endl;
    }
}
void sum_of_digits(int num)
{
    int sum = 0;
    while (num != 0)
    {
        sum += num % 10;
        num /= 10;
    }
    cout << "The sum of digits is: " << sum << endl;
}

void largest_of_three(int a, int b, int c)
{
    if (a >= b && a >= c)
    {
        cout << "The largest number is: " << a << endl;
    }
    else if (b >= a && b >= c)
    {
        cout << "The largest number is: " << b << endl;
    }
    else
    {
        cout << "The largest number is: " << c << endl;
    }
}

void next_character(char ch)
{
    if ((ch >= 'a' && ch < 'z') || (ch >= 'A' && ch < 'Z'))
    {
        char next_ch = ch + 1;
        cout << "The next character after " << ch << " is " << next_ch << endl;
    }
    else if (ch == 'z')
    {
        cout << "The next character after z is a" << endl;
    }
    else if (ch == 'Z')
    {
        cout << "The next character after Z is A" << endl;
    }
    else
    {
        cout << "Invalid input. Please enter an English alphabet character." << endl;
    }
}
int main()
{
    // Palindrone check question 1
    int number;
    cout << "Enter a number: ";
    cin >> number;
    palindrone_dec(number);

    // sfunction to calculate the sum of digits of a number question 2
    int num2;
    cout << "Enter another number: ";
    cin >> num2;
    sum_of_digits(num2);

    // function that prints the largest of 3 numbers question 3
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    largest_of_three(a, b, c);

    //     Write a function that accepts a character (ch) as parameters & returns
    // the character that occurs after ch in the English alphabet.
    // Eg : input = ‘c’, return value = ‘d’
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    next_character(ch);

    return 0;
}