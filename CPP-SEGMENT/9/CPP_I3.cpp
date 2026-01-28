#include <iostream>
#include <string>
using namespace std;
// multilevel Inheritance
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

class BreedDog : public Dog
{
public:
    string breed;
    void setbreed(string breed)
    {
        this->breed = breed;
    }
    string getBreedName()
    {
        return breed;
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

    // breed
    BreedDog Bd;

    Bd.setbreed("german shephered");
    Bd.bark();
    cout << Bd.getBreedName();

    return 0;
}