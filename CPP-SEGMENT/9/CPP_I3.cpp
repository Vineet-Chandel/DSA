#include <iostream>
using namespace std;

class CPP_I3
{
public:
    string name;
    int roll;
    int *num;

    CPP_I3(string name, int roll)
    {
        this->name = name;
        this->roll = roll;

        num = new int; // dynamic allocation
        *num = 12;
    }
    CPP_I3(CPP_I3 &orignal)
    {
        cout << "copying.." << endl;
        name = orignal.name;
        roll = orignal.roll;
        num = orignal.num;
    }
};

int main()
{
    CPP_I3 c1("vineet", 43);
    CPP_I3 c2(c1);

    cout << c2.name << endl;
    cout << c2.roll << endl;
    cout << *c2.num << endl;

    *c2.num = 10;

    cout << *c2.num << endl;

    // num is the deep copied
    //  other than the num it is shallow copied

    return 0;
}