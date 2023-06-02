#include <iostream>
using namespace std;

void reverseNumber(int n){
    int reverse=0;
    while (n!=0)
    {
        /* code */
        int digit=n%10;
        cout<<digit;
        n=n/10;    

    }
    
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    reverseNumber(n);

    return 0;
}
