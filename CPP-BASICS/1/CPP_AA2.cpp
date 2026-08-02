#include <iostream>
using namespace std;

int main()
{
    signed short int num1;
    // Size: 2 bytes | Range: -32,768 to +32,767
    cout << "signed short int ---- " << sizeof(num1) << endl; // %hd

    short int num2;
    // Size: 2 bytes | Range: -32,768 to +32,767
    cout << "short int ---- " << sizeof(num2) << endl; // %hd

    signed int num3;
    // Size: 4 bytes | Range: -2,147,483,648 to +2,147,483,647
    cout << "signed int ---- " << sizeof(num3) << endl; // %d or %i

    int num4;
    // Size: 4 bytes | Range: -2,147,483,648 to +2,147,483,647
    cout << "int ---- " << sizeof(num4) << endl; // %d

    signed long int num5;
    // Size: 8 bytes | Range: -9,223,372,036,854,775,808
    //                  to +9,223,372,036,854,775,807
    cout << "signed long int ---- " << sizeof(num5) << endl; // %ld

    long int num6;
    // Size: 8 bytes | Range: -9,223,372,036,854,775,808
    //                  to +9,223,372,036,854,775,807
    cout << "long int ---- " << sizeof(num6) << endl; // %ld

    signed long long int num7;
    // Size: 8 bytes | Range: -9,223,372,036,854,775,808
    //                  to +9,223,372,036,854,775,807
    cout << "signed long long int ---- " << sizeof(num7) << endl; // %lld

    long long int num8;
    // Size: 8 bytes | Range: -9,223,372,036,854,775,808
    //                  to +9,223,372,036,854,775,807
    cout << "long long int ---- " << sizeof(num8) << endl; // %lld

    unsigned short int num9;
    // Size: 2 bytes | Range: 0 to 65,535
    cout << "unsigned short int ---- " << sizeof(num9) << endl; // %hu

    unsigned int num10;
    // Size: 4 bytes | Range: 0 to 4,294,967,295
    cout << "unsigned int ---- " << sizeof(num10) << endl; // %u

    unsigned long int num11;
    // Size: 8 bytes | Range: 0 to 18,446,744,073,709,551,615
    cout << "unsigned long int ---- " << sizeof(num11) << endl; // %lu

    unsigned long long int num12;
    // Size: 8 bytes | Range: 0 to 18,446,744,073,709,551,615
    cout << "unsigned long long int ---- " << sizeof(num12) << endl; // %llu

    float num_1;
    // Size: 4 bytes | Range: ~1.2 × 10^-38 to ~3.4 × 10^38
    // Precision: ~6–7 decimal digits
    cout << "float ---- " << sizeof(num_1) << endl;

    double num_2;
    // Size: 8 bytes | Range: ~2.3 × 10^-308 to ~1.7 × 10^308
    // Precision: ~15–16 decimal digits
    cout << "double ---- " << sizeof(num_2) << endl;

    long double num_3;
    // Size: 16 bytes (on most 64-bit systems like macOS/Linux)
    // Range: ~3.4 × 10^-4932 to ~1.1 × 10^4932
    // Precision: ~18–21 decimal digits
    cout << "long double ---- " << sizeof(num_3) << endl;

    return 0;
}
