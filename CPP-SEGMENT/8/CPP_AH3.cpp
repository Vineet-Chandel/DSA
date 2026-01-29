#include <iostream>
using namespace std;
int main()
{
    // arrays of structures
    // eg1
    struct Student
    {
        int roll;
        float marks;
    };
    Student class1[3];
    class1[0] = {101, 95.5f};
    class1[1] = {102, 85.0f};
    class1[2] = {103, 75.5f};
    for (int i = 0; i < 3; i++)
    {
        cout << "Student " << i + 1 << ": Roll = " << class1[i].roll
             << ", Marks = " << class1[i].marks << endl;
    }

    // eg2

    struct time
    {
        int hours;
        int minutes;
        int seconds;
    };

    struct car
    {
        string brand;
        string model;
        int year;
        struct time t[3];
    };

    car c1;
    c1.brand = "Toyota";
    c1.model = "Camry";
    c1.year = 2020;
    c1.t[0] = {10, 30, 45};
    c1.t[1] = {11, 15, 20};
    c1.t[2] = {12, 45, 55};

    cout << "Car Details:" << endl;
    cout << "Brand: " << c1.brand << endl;
    cout << "Model: " << c1.model << endl;
    cout << "Year: " << c1.year << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Time " << i + 1 << ": "
             << c1.t[i].hours << "h "
             << c1.t[i].minutes << "m "
             << c1.t[i].seconds << "s" << endl;
    }

    return 0;
}