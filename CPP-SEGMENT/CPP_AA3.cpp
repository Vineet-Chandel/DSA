#include <iostream>
using namespace std;
int main()
{

    float num_1;
    cout << "float ---- " << sizeof(num_1) << endl;
    double num_2;
    cout << "double ---- " << sizeof(num_2) << endl;
    long double num_3;
    cout << "long double ---- " << sizeof(num_3) << endl;

    // pointers !!

    int a = 10;
    int *ptr = &a;
    // note this thing ,
    //  int ptr = &a;   --- Error aayega --- Reason: &a ek address hai, aur address ko store karne ke liye pointer (int *kuch_kuch) chahiye, normal int nahi. !!

    cout << *ptr << "=" << a << endl;
    cout << ptr << "=" << &a << "=" << &*ptr << endl;
    cout << &ptr << "!=" << ptr << endl;

    // upr ki baton se hame ye sekhne ko milta hai kii
    //   ye karne ke baadd  int *ptr = &a;
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
    return 0;
}