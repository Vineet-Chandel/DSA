#include <iostream>
using namespace std;
int updateTarika1(int num)
{
    num++;
    return 0;
}
int updateTarika2(int &num)
{
    num++;
    return 0;
}

int main()
{
    // pointers !!

    int a = 10;

    // hamesha adrress "pointer" mein save hoga
    int *ptr = &a;
    // note this thing ,
    //  int ptr = &a;   --- Error aayega --- Reason: &a ek address hai, aur address ko store karne ke liye pointer (int *kuch_kuch) chahiye, normal int nahi. !!

    // print karate time to hamm imagine kar sakte hai ki ptr -- &a and *ptr  -- a
    cout << *ptr << "=" << a << endl;
    cout << ptr << "=" << &a << "=" << &*ptr << endl;
    cout << &ptr << "!=" << ptr << endl;

    // upr ki baton se hame ye sekhne ko milta hai kii
    // ye karne ke baadd  int *ptr = &a;
    // ptr mein addreess of a hai
    // *ptr mtlb value of a
    // &ptr is the adrres where the value and the address of the variable is saved -- address of pointer variable itself

    // system double pointerr ka
    int **ptr2 = &ptr;
    cout << *ptr2 << "=" << ptr << endl;
    cout << **ptr2 << "=" << *ptr << endl;
    cout << ptr2 << "=" << &ptr << endl;
    cout << &ptr2 << "!=" << ptr << endl;

    // oor ache se smjne k eliye goo to the  ~ doublePointer.png && pointer.png

    cout << &**ptr2 << endl; // address of a

    // refrence variables !!!
    int alpha = 23;
    int &beta = alpha;
    // beta  -> same memory
    // beta is another name of alpha
    cout << &beta << "=" << &alpha << endl;
    // same address

    // why the refrence variable is so important ?
    int num = 234;
    cout << "beforeNum" << num;
    updateTarika1(num); 
    // pass by value hua hai num ki n parameter mien just ek copy bane gi
    cout << "aftreNum" << num;
    cout << endl;
    cout << "beforeNum" << num;
    updateTarika2(num);
    // pass by reference hua hai, yaha parameter original variable ko refer karta hai
    // koi copy nahi banti, isliye original variable change ho jata hai
    cout << "aftreNum" << num;
    return 0;
}