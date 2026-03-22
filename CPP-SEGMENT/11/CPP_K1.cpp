#include <iostream>
#include <string>
using namespace std;

int main()
{

    // find the no. of vowels
    string s;
    cin >> s;
    int n = s.length();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'I' || s[i] == 'E' || s[i] == 'O' || s[i] == 'U')
        {
            count++;
        }
    }

    cout << count << endl;
    char str[5] = {'a', 'b', 'c', 'd', 'e'};

    // in memory -- a b c d e \0
    for (int i = 0; i < 5; i++)
    {
        cout << str[i] << " ";
    }

    // char str3[5] = "abcde";
    // in memory -- a b c d e -- back slash aa nhi paya
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << str3[i] << " ";
    // }

    char str2[5] = "abcd";
    // in memory -- a b c d e \0

    for (int i = 0; i < 5; i++)
    {
        cout << str2[i] << " ";
    }
    return 0;
}