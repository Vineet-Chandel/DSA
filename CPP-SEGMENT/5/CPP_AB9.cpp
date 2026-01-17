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

// removing duplicates in the strings
string dupi(string word)
{
    string ansstr;
    for (int i = 0; i < word.size(); i++)
    {
        bool repeating = false;
        for (int j = i + 1; j < word.size(); j++)
        {
            if (word[i] == word[j])
            {
                repeating = true;
                break;
            }
            else
            {
                repeating = false;
            }
        }

        if (repeating == false)
        {
            ansstr += word[i];
        }
    }

    return ansstr;
}
int main()
{
    string first_string = "aapnaacollegege";
    cout << dupi(first_string);

    cout << tilling(5);

    return 0;
}
