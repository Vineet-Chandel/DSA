#include <iostream>
#include <string>
using namespace std;

// structure
struct Student
{
    int roll;    // 4 bytes
    float marks; // 4 bytes
    char grade;  // 1 byte
};

// function to initialize using parameters
void input(int a, float b, char c)
{
    Student funcClass{a, b, c};
    cout << "data of the student 4 : "
         << funcClass.roll << " "
         << funcClass.marks << " "
         << funcClass.grade << endl;
}

int main()
{
    // first method: member-wise assignment
    Student s1;
    s1.roll = 101;
    s1.marks = 95.5f;
    s1.grade = 'A';

    // third method: brace initialization
    Student s2{102, 75.5f, 'b'};

    // fourth method: designated initialization (C++20+)
    Student s3{.roll = 188, .marks = 90.5f, .grade = 'A'};

    cout << "Size of the structure: " << sizeof(Student) << endl;

    // fifth method: via function
    input(121, 97.7f, 'c');

    cout << "data of the student 1 : "
         << s1.roll << " " << s1.marks << " " << s1.grade << endl;

    cout << "data of the student 2 : "
         << s2.roll << " " << s2.marks << " " << s2.grade << endl;

    cout << "data of the student 3 : "
         << s3.roll << " " << s3.marks << " " << s3.grade << endl;

    // -------- NESTED STRUCTURES --------

    struct Address
    {
        string city;
        int pin;
    };

    struct College
    {
        int roll;
        Address addr;
    };

    College c1;
    c1.roll = 311;
    c1.addr.city = "Kanpur";
    c1.addr.pin = 208017;

    cout << "data of the college student 1 : "
         << c1.roll << " "
         << c1.addr.city << " "
         << c1.addr.pin << endl;

    return 0;
}
