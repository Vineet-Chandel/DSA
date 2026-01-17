#include <iostream>
using namespace std;
int main()
{
    // Itterators in Vectors

    vector<int> v = {10, 20, 30, 40, 50};
    cout << "Using iterator to traverse the vector:" << endl;
    vector<int>::iterator it = v.end();
    cout << &it << endl;        // iterator object ka address (stack memory)
    cout << &*it << endl;       // address of first element
    cout << &*(it + 1) << endl; // address of second element
    cout << &*(it + 2) << endl; // address of third element

    cout << &*(it - 1) << endl; // address of last element
    cout << &*(it - 2) << endl; // address of second last element

    // 0 != value when .end is used
    cout << *(it - 1) << endl; // value of last element
    cout << *(it - 2) << endl; // value of second last element

    // cout<<it<<endl;         // error  dega kyuki it ek object hai jo address store krta hai
    //  0 != value when .begin is used
    cout << *it << endl;       // 10
    cout << *(it + 1) << endl; // 20
    cout << *(it + 2) << endl; // 30

    // traversing
    cout << "Traversing using iterator:";
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    cout << "Traversing in reverse using iterator:";
    for (vector<int>::iterator it = v.end() - 1; it >= v.begin(); it--)
    {
        cout << *it << " ";
    }

    // use of the auto keyword with iterators
    cout << endl;
    cout << "Using auto keyword with iterator to traverse the vector:";
    for (auto i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    cout << "Using auto keyword with iterator to traverse the vector in reverse:";
    for (auto i = v.end() - 1; i >= v.begin(); i--)
    {
        cout << *i << " ";
    }
    cout << endl;

    cout << "auto keyword with range based for loop:";
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}