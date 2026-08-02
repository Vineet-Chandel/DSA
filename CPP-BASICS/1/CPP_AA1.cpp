#include <iostream>
// including the header file  ---[1]
using namespace std; // namespace declaration ---[2]

int main() // special function --- [3]
{

    int a = 10; // variable
    cout << a;  // output

    return 0;
}

// [1] -- question arises what is the header files?

// header file
// A header file include classes, functions, variables (objects), templates, constants, and more.

// for ex : iostream a header file contains the multiple classes some of them are istream, ostream etc and the objects (instance) like cin and cout where cin is the object of the istream and the cout is the object of the ostream

// other header files are :
// fstream (files), string (strings), vector (STL), bits/stdc++.h (all-in-one).

// ============ # ============ # ============ # ============ # ============

// [2] -- there is 3 words written using namespace std;
// first we understand the what is namespace!
// think in the code there is two times this is written,

// class Student{};
// class Student{};

// now think if you going to use them which class will the compiler choose?
// it can't
// there is the name collision

// Namespaces solve this.

// namespace School{
//     class Student {};
// }

// namespace College{
//     class Student {};
// }

// Now both exist peacefully.
// You simply specify which one you want:

// School::Student s1;
// College::Student s2;

// What does :: mean?
// Scope Resolution Operator -- It tells the compiler
// "Go inside this namespace (or class) and find this name."
// ex: of one namespace : in CPP_AA3.cpp

// now what is std ?
// std is just another namespace. It is not a keyword. It is not a class. It is not a library. It is a namespace created by the C++ Standard Library.

// almost you can think this as Conceptually,
// namespace std
// {

//     class string {};

//     class vector {};

//     class ostream {};

//     class istream {};

//     ostream cout;

//     istream cin;

//     void swap(...);

//     void sort(...);

// }

// Everything belongs inside namespace std

// ============ # ============ # ============ # ============ # ============

// why the int main() function is so special in the c++
// main() is the entry point of every C++ program.
// The operating system doesn't know anything about your functions like add(), print(), or login().
// why the name is main Because the C++ language standard says: "The program's entry function must be named main."
// we can't even change the name because compiler always finds the main function not the others
// we also can't have the two main function

// but who calls the function? most people thinks that compiler call the main function but not exactly what happens!
// workflow of the full excecuting the function -- workflow.pdf
