#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int low, int high) {
  int pivot = high;
  high--;
  while (low <= high) {
    if (arr[low] > arr[pivot]) {
      swap(arr[low], arr[high]);
      low++;
      high--;
    } else if (arr[low] < arr[pivot]) {
      low++;
    } else {
      high--;
    };
  };
  swap(arr[pivot], arr[high]);
  return high + 1;
};

void quickSort(vector<int> &arr, int low, int high) {
  if (low < high) {
    int pivot = partition(arr, low, high);
    quickSort(arr, low, pivot - 1);
    quickSort(arr, pivot + 1, high);
  }
}
int main() {
  vector<int> arr = {8, 3, 5, 4, 7, 6, 1, 2};

  quickSort(arr, 0, arr.size() - 1);

  cout << "Sorted array: ";
  for (int x : arr) {
    cout << x << " ";
  }

  return 0;
}