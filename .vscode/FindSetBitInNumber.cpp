#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter Number YOu want to Check Set Bits of 1"<<endl;
    cin>>n;
    int count=0;

    while(n!=0){

        if(n&1){
            count++;
        }
        n=n>>1;
    }
    cout<<count;

    return 0;
}