#include <iostream>
#include <string>
using namespace std;
// Encapsulation
class Student
{
private:
    string name;
    float cgpa;

public:
    void setName(string name)
    {
        this->name = name;
    }

    void setCgpa(float cgpa)
    {
        this->cgpa = cgpa;
    }

    string getName()
    {
        return name;
    }

    float getCgpa()
    {
        return cgpa;
    }
};

int main()
{
    Student s1;
    s1.setName("Vineet");
    s1.setCgpa(9.1);

    cout << s1.getCgpa() << endl;
    cout << s1.getName();

    return 0;
}
