#include <iostream>
using namespace std;

class showRoom
{
    string name;
    string colour;
    int rollNum;

public:
    // constructors
    showRoom()
    {
        cout << "carr start manufacturing" << endl;
    };

    // setters
    void setName(string setNameValue)
    {
        name = setNameValue;
    }
    void setColour(string setColourValue)
    {
        colour = setColourValue;
    }
    void setRollNum(int setRollNumValue)
    {
        rollNum = setRollNumValue;
    }
    void start()
    {
        cout << "car start worrking";
    }
    void stop()
    {
        cout << "car stop worrking";
    }
    // getters
    string getName()
    {
        return name;
    }
    string getColour()
    {
        return colour;
    }
    int getRollNum()
    {
        return rollNum;
    }
};

int main()
{
    // object
    showRoom s1;

    // setting
    s1.setRollNum(23);
    s1.setName("Maruti 800");
    s1.setColour("white");

    // getting
    cout << s1.getName() << endl;
    cout << s1.getRollNum() << endl;
    cout << s1.getColour() << endl;
    return 0;
}