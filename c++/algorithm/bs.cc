// binary search algorithm for an ordered array.

#include <iostream>

using namespace std;

template<typename T>
int binarySearch(const T arr[], int arrSize, const T& key) {
  int lo = 0, mid, hi = arrSize - 1;
  while (lo <= hi) {
    mid = (lo + hi) / 2;
    if (key < arr[mid])
      hi = mid - 1;
    else if (key > arr[mid])
      lo = mid + 1;
    else return mid;
  }
  return -1;
}

int main() {
  int arr[] = {2,3,4,5,6};
  char str[] = "abcde";
  cout << binarySearch(arr, 5,3) << endl;
  cout << binarySearch(str, 5, 'd') << endl;
  return 0;
}
