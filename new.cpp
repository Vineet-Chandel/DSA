#include <iostream>
using namespace std;


int main(){
    
    
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);

   int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            count++;
        }
    }
    cout << "Total subarrays in this particular arry is " << count;
}