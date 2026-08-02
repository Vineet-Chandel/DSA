#include <iostream>
#include <vector>
using namespace std;

// Merge function
void merge(vector<int>& arr, int left, int mid, int right) {
    vector<int> temp;
    int i = left;      // start of left subarray
    int j = mid + 1;   // start of right subarray

    // Compare and merge
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
        }
    }

    // Remaining elements (left side)
    while (i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }

    // Remaining elements (right side)
    while (j <= right) {
        temp.push_back(arr[j]);
        j++;
    }

    // Copy back to original array
    for (int k = 0; k < temp.size(); k++) {
        arr[left + k] = temp[k];
    }
}

// Merge Sort function
void mergeSort(vector<int>& arr, int left, int right) {
    if (left >= right) return;

    int mid = left + (right - left) / 2;

    mergeSort(arr, left, mid);       // left half
    mergeSort(arr, mid + 1, right);  // right half

    merge(arr, left, mid, right);    // merge both halves
}

// Driver code
int main() {
    vector<int> arr = {8, 3, 5, 4, 7, 6, 1, 2};

    mergeSort(arr, 0, arr.size() - 1);

    cout << "Sorted array: ";
    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}