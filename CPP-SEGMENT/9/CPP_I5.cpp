#include <iostream>
#include <string>
using namespace std;
// hybrid Inheritance
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

    // breed
    BreedDog Bd;

    Bd.setbreed("german shephered");
    Bd.bark();
    cout << Bd.getBreedName();

    cat myCat;

    // Inherited methods (from Animal)
    myCat.eat();
    myCat.sleep();

    // Child class method
    myCat.meaow();

    return 0;
}