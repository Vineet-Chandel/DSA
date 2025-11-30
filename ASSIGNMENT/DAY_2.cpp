#include <iostream>
using namespace std;
int main()
{
    // question 1
    int long long num;
    cout << "please enter the no. whose square you have to find out_";
    cin >> num;
    cout << endl
         << "your square is_" << num * num << endl;

    // question 2 (not in pdf)
    int height;
    int width;
    int area;
    cout << "please enter the height_";
    cin >> height;
    cout << endl
         << "please enter the width_";
    cin >> width;
    area = ((height * width) / 2);

    cout << "your area of the triangle is_" << area;

    // question 3
    cout << "Vineet  MegaMart welcomes you!" << endl;
    float pencil_price;
    int pencil_quantity;
    float pen_price;
    int pen_quantity;
    float eraser_price;
    int eraser_quantity;
    float total_price;
    cout << "please enter the price of one pencil_";
    cin >> pencil_price;
    cout << endl
         << "please enter the quantity of pencils_";
    cin >> pencil_quantity;
    cout << endl
         << "please enter the price of one pen_";
    cin >> pen_price;
    cout << endl
         << "please enter the quantity of pens_";
    cin >> pen_quantity;
    cout << endl
         << "please enter the price of one eraser_";
    cin >> eraser_price;
    cout << endl
         << "please enter the quantity of erasers_";
    cin >> eraser_quantity;

    total_price = (pen_quantity * pen_price) + (pencil_quantity * pencil_price) + (eraser_price * eraser_quantity);
    cout << "the total price is_" << total_price << endl;
    cout << "gst applied is 18%" << endl;
    float gst_price = total_price * 0.18;
    cout << "the gst amount is_" << gst_price << endl;

    cout << "the final amount to be paid is_" << total_price + gst_price << endl;
    cout << "thank you for shopping with us!" << endl;

    // question 4
    float principal;
    float rate_of_interest;
    float time;
    cout << "please enter the principal amount_";
    cin >> principal;
    cout << endl
         << "please enter the rate of interest_";
    cin >> rate_of_interest;
    cout << endl
         << "please enter the time in years_";
    cin >> time;
    float simple_interest = (principal * rate_of_interest * time) / 100;
    cout << "the simple interest is_" << simple_interest << endl;

    // question 5
    const float pi = 3.14;
    float radius;
    cout << "please enter the radius of the circle_";
    cin >> radius;
    float circumference = 2 * pi * radius;
    float area_of_circle = pi * radius * radius;
    cout << "the area of the circle is_" << area_of_circle << endl;
    cout << "the circumference of the circle is_" << circumference << endl;

    return 0;
}