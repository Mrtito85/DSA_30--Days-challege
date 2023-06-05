#include <iostream>
using namespace std;

void printNumber(int n, string arr[]) {
  if (n == 0)
    return;

  int digit = n % 10;
  n = n / 10;
  cout<<digit;
  printNumber(n, arr);
  cout << arr[digit] << endl;
}

int main() {

  string arr[10] = {"Zero", "One", "Two",   "Three", "Four",
                    "Five", "Six", "Seven", "Eight", "Nine"};
  int n;
  cin>>n;
  printNumber(n, arr);
}