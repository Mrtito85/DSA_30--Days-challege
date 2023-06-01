#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
int number;

    cout << "Enter number between 0 to 35: ";
    cin >> number;


    if (number <= 9) {
        cout << "Output: " << number <<endl;
    } else {
        char character = (char)('A' + (number - 10));
        cout << "Output: " << character <<endl;
    }

    return 0;
}
