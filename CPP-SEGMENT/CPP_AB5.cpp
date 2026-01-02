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

    // print vector elements
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    // ----------------------------------------------------------
    vector<pair<int, int>> vec2;

    vec2.push_back({1, 2});
    // ye bhi .push_back jaisa hi hai but thoda fast hai and different syntax
    vec2.emplace_back(3, 4);

    for (int i = 0; i < vec2.size(); i++)
    {

        cout << vec2[i].first << " ";
        cout << vec2[i].second << " ";
    }

    cout << endl;

    // ----------------------------------------------------------

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

    return 0;
}