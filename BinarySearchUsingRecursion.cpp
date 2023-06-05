#include <iostream>
using namespace std;

bool BinarySearch(int arr[], int s, int e, int k) {
  if (s > e) {
    return false;
  }
  int mid = s + (e - s) / 2;
  if (arr[mid] == k) {
    return true;
  }
  if (arr[mid] < k) {
    return BinarySearch(arr, mid + 1, e, k);
  } else {
    return BinarySearch(arr, s, mid - 1, k);
  }
}

int main() {

  int arr[7] = {2, 3, 4, 5, 6, 7, 8};
  int e = 7;
  int k = 4;
  int s = 0;
  bool ans = BinarySearch(arr, s, e, k);
  if (ans) {
    cout << "key is Present" << endl;
  } else {
    cout << "key is not present" << endl;
  }
}