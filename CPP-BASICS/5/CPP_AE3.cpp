#include <iostream>
#include <string>
using namespace std;

int tilling(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    // vertical
    int ans1 = tilling(n - 1);
    // horizontal
    int ans2 = tilling(n - 2);
    return ans1 + ans2;
}

// // removing duplicates in the strings
// string dupi(string word)
// {
//     string ansstr;
//     for (int i = 0; i < word.size(); i++)
//     {
//         bool repeating = false;
//         for (int j = i + 1; j < word.size(); j++)
//         {
//             if (word[i] == word[j])
//             {
//                 repeating = true;
//                 break;
//             }
//             else
//             {
//                 repeating = false;
//             }
//         }

//         if (repeating == false)
//         {
//             ansstr += word[i];
//         }
//     }

//     return ansstr;
// }

void duplicate(bool alpha[], string ans, string wrd, int i)
{

    if (wrd.length() == i)
    {
        cout << ans;
        return;
    }
    char tWord = wrd[i];
    int charVal = (int)tWord - 'a';

    if (!alpha[charVal])
    {
        alpha[charVal] = true;
        duplicate(alpha, ans + tWord, wrd, i + 1);
    }
    else
    {
        duplicate(alpha, ans, wrd, i + 1);
    }
}

int friendsCombine(int n)
{

    if (n == 0 || n == 1)
    {
        return 1;
    }
    // alone
    int way1 = friendsCombine(n - 2);
    // pair
    int way2 = (n - 1) * friendsCombine(n - 1);

    return way1 + way2;
}

int main()
{
    string first_string = "aapnaacollegege";
    // cout << dupi(first_string);

    cout << tilling(5);
    string wrd = "jvnoen";
    bool alpha[26] = {false};
    string ans = "";
    duplicate(alpha, ans, wrd, 0);
    cout << friendsCombine(2);
    return 0;
}
