#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vectors -- dynamic arrays hote hain jo size mein badh ya ghat sakte hain even if we predefine them the size got automatically adjusted
    vector<int> vec;

    // pichu se no. add karte jao .push_back function se
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    // ye bhi .push_back jaisa hi hai but thoda fast hai
    vec.emplace_back(4);

    // aage se no. add karte jao .insert function se
    vec.insert(vec.begin(), 0); // begin() returns the iterator to the first element

    // remove last element
    vec.pop_back();

    // size of vector
    cout << "Size of vector: " << vec.size() << endl;

    // prints last element
    cout << "last element :" << vec.back() << endl;
    // prints first element
    cout << "First element :" << vec.front() << endl;

    // type of indexing

    cout << "Element at index 1 :" << vec.at(1) << "=" << vec[1] << endl;
    cout << endl;

    // print vector elements
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    cout << "----------------------------------------------------------" << endl;
    vector<pair<int, int>> vec2;

    vec2.push_back({1, 2});
    // ye bhi .push_back jaisa hi hai but thoda fast hai and different syntax
    vec2.emplace_back(3, 4);

    // vec2.emplace_back(3, 4, 34, 553, 21, 22, 23, 21111);
    // errror
    // <pair<int, int>> mein sirf 2 hi values store kar sakte hain !!
    // agr aur chahiye to vector of vectors use karna padega

    for (int i = 0; i < vec2.size(); i++)
    {

        cout << vec2[i].first << " ";
        cout << vec2[i].second << " ";
        if (i == 2)
        {
            // cout << vec2[i].third << " ";
            // cout << vec2[i].fourth << " ";
            // cout << vec2[i].fifth << " ";
            // cout << vec2[i].sixth << " ";
            // cout << vec2[i].seventh << " ";

            //.first and .second hi hote hain pair mein baki sab nahi hote
            // agr aur chahiye to vector of vectors use karna padega
        }
    }

    cout << endl;

    cout << "----------------------------------------------------------" << endl;

    vector<int> vec3 = {1, 2, 3, 4, 5}; // vector of size 5 with all values initialized to 10

    cout << "Size of vector vec3: " << vec3.size() << endl;
    cout << "Capacity of vector vec3: " << vec3.capacity() << endl;
    vec3.push_back(4);
    cout << "Size of vector vec3: " << vec3.size() << endl;
    cout << "Capacity of vector vec3: " << vec3.capacity() << endl;

    for (int i = 0; i < vec3.size(); i++)
    {
        cout << vec3[i] << " ";
    }

    cout << endl;
    cout << "----------------------------------------------------------" << endl;

    return 0;
}