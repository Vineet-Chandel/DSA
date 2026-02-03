#include <iostream>
using namespace std;
// POLYMORPHISM
class Overloading
{
private:
    int real;
    int imaginary;

public:
    Overloading() {};
    // FUNCTION OVERLOADING IN OOP
    Overloading(int num)
    {
        cout << "The integer  is: " << num << endl;
    };
    Overloading(float num)
    {
        cout << "The float  is: " << num << endl;
    };
    Overloading(int real, int imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
        cout << real << "+" << imaginary << "i" << endl;
    };

    // OBJECT OVERLOADING IN OOP
    void operator+(Overloading &obj)
    {
        int sumREAL = this->real + obj.real;
        int sumIMG = this->imaginary + obj.imaginary;
        Overloading c3(sumREAL, sumIMG);
    };

    virtual void nachoo()
    {
        cout << "Parent nacho nacho re" << endl;
    }
};

class child : public Overloading
{
public:
    // FUNCTION OVERRIDING IN OOP
    void nachoo()
    {
        cout << "child nacho nacho re" << endl;
    };
};

int main()
{
    Overloading c1(3, 4);
    Overloading c2(5, 6);

    c1 + c2;
    child b1;
    b1.nachoo();
    return 0;
}