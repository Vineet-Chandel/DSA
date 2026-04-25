#include <iostream>
using namespace std;

int main() {

  int x;
  int *ptr;
  x = 7;
  ptr = &x;
  cout << *ptr; // 7
  cout << ptr;  // ADDRESS
  cout << &x;   // ADDRESS

  return 0;
}

// DONE