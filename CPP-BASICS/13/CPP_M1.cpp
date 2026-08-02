#include <iostream>
#include <vector>
using namespace std;

void insert(vector<int>& vec, int n){
    int i = n;
    int temp = vec[n];

    while(i > 1 && temp > vec[i/2]){
        vec[i] = vec[i/2];
        i = i/2;
    }

    vec[i] = temp;
}

void createHeap(vector<int>& vec ,int n){
    for (int i = 2; i<=n; i++) {
        insert(vec ,i);

    }     
   
};
int Delete(vector<int>& A, int n)
{
    swap(A[1], A[n]);   // move max to end

    int i = 1;
    int j;

    while (true)
    {
        j = 2 * i;

        if (j > n - 1)
            break;

        if (j < n - 1 && A[j + 1] > A[j])
            j = j + 1;

        if (A[i] < A[j])
        {
            swap(A[i], A[j]);
            i = j;
        }
        else
            break;
    }

    return A[n];
}
int main(){
    vector<int> vec = {10,20,30,25,5,40,35} ;
    createHeap(vec ,vec.size());
    cout<<"last"<<vec[vec.size() -1]<<endl;
    for (int x : vec) {
        cout << x << " ";
    }  
cout<<endl;
int n = vec.size() - 1;

for (int i = vec.size() - 1; i > 1; i--)
{
    Delete(vec, i);
}
for(int i = 1; i < vec.size(); i++){ cout << vec[i] << " ";}
}