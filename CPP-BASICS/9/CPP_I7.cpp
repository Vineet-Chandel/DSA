#include <iostream>
#include <string>
using namespace std;

// Base class 1
class Animal
{
public:
    void eat()
    {
        cout << "Animal is eating..." << endl;
    }
};

// Base class 2
class Pet
{
public:
    void play()
    {
        cout << "Pet is playing..." << endl;
    }
};

// Derived class (Multiple Inheritance)
class Dog : public Animal, public Pet
{
public:
    void bark()
    {
        cout << "Dog is barking!" << endl;
    }
};

int main()
{
    Dog d;

    d.eat();  // from Animal
    d.play(); // from Pet
    d.bark(); // from Dog

    return 0;
}
