#include <iostream>
#include <string>
using namespace std;
int main(){
string s = "hello world cpp";

s.erase(remove(s.begin(), s.end(), ' '), s.end());

return 0;
}