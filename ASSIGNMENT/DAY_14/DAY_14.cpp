#include <iostream>
using namespace std;

int main() {
  // Count how many times lowercase vowels occurred in a String entered by the
  // user.

  string s;
  cout << "ENTER THE STRING PLEASE :" << endl;
  cin >> s;

  int count = 0;

  int n = s.length();

  for (int i = 0; i < n; i++) {
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
        s[i] == 'u') {
      count++;
    }
  }

  cout << "THE NUMBER OF LOWERCASE VOWELS IS : " << count << endl;

  return 0;
}