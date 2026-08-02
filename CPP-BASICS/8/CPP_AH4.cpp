#include <iostream>
using namespace std;
int main()
{
    // pointer to structures
    struct Student
    {
        int roll;
        float marks;
    };
    Student s1 = {101, 95.5f};
    Student *ptr = &s1;

    cout << "Student Roll: " << ptr->roll << endl;
    cout << "Student Marks: " << ptr->marks << endl;

    cout << "Student Roll: " << (*ptr).roll << endl;
    cout << "Student Marks: " << (*ptr).marks << endl;
    // accessing and modifying structure members using pointer


    Student s2 = {102, 85.0f};
    s2.roll = 188;
    s2.marks = 90.5f;

    cout << "Student Roll: " << s2.roll << endl;
    cout << "Student Marks: " << s2.marks << endl;

    return 0;
}