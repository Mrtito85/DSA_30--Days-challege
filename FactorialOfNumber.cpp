#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial*=i;
    }
    cout<<factorial;
    return 0;
}
