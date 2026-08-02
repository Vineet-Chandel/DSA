#include <iostream>
#include <string>
using namespace std;
// hierarchal Inheritance
// Superclass (Parent)
class Animal
{
public:
    void eat()
    {
        cout << "Animal is eating..." << endl;
    }
    void sleep()
    {
        cout << "Animal is sleeping..." << endl;
    }
};

// Subclass (Child) - Inherits from Animal
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dog is barking!" << endl;
    }
};
class cat : public Animal
{
public:
    void meaow()
    {
        cout << "cat is meaaowwinng!" << endl;
    }
};

int main()
{
    Dog myDog;

    // Inherited methods (from Animal)
    myDog.eat();
    myDog.sleep();

    // Child class method
    myDog.bark();

    cat myCat;

    // Inherited methods (from Animal)
    myCat.eat();
    myCat.sleep();

    // Child class method
    myCat.meaow();

    return 0;
}