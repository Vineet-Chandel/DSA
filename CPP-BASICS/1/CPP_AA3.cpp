#include <iostream>
using namespace std;

namespace College
{
    class Student
    {
    public:
        int scgpa = 8;
        char section = 'A';
        int year = 2;
        int sem = 3;
    };
}

namespace School
{
    class Student
    {
    public:
        int percentage = 30;
        char section = 'A';
        int classNo = 6;
    };
}

int main()
{
    cout << "============ # ============ # ============ # ============ # Vineet Chandel" << endl;
    cout << "Namespace illustration program has been statrted," << endl;

    School::Student S1;
    College::Student S2;
    cout << "DATA FROM SCHOOL " << S1.percentage << endl;
    cout << "DATA FROM COLLEGE " << S2.scgpa << endl;

    cout << "============ # ============ # ============ # ============ # ============" << endl;
    return 1;
}