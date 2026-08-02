#include <iostream>
#include <string>

using namespace std;

// backtracking in the array !!
void printArr(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }

  cout << endl;
}
void changeArr(int arr[], int n, int index)
{
  if (index >= n)
  {
    return;
  }
  arr[index] = index + 1;
  changeArr(arr, n, index + 1);
  arr[index] -= 2; // backtracking
}

void subset(string str, string subsetStr, int i)
{
  if (i == str.length())
  {
    cout << "[" << subsetStr << "]" << endl;
    return;
  }

  // Include the current character
  subset(str, subsetStr + str[i], i + 1);

  // Exclude the current character
  subset(str, subsetStr, i + 1);
}

string charRemover(string str, int index)
{
  string newStr = "";
  for (int i = 0; i < str.length(); i++)
  {
    if (i != index)
    {
      newStr += str[i];
    }
  }
  return newStr;
}

void permutation(string str, string newStr)
{
  if (str.length() == 0)
  {
    cout << "[" << newStr << "]" << endl;
    return;
  }

  for (int i = 0; i < str.length(); i++)
  {
    char ch = str[i];

    string remaining = charRemover(str, i);

    permutation(remaining, newStr + ch);
  }
}
int main()
{
  // backtracking in array
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(int);
  changeArr(arr, n, 0);
  printArr(arr, n);

  // find subsets
  string str = "abc";
  int count = 0;

  subset(str, "", 0);

  permutation("abc", "");
}
