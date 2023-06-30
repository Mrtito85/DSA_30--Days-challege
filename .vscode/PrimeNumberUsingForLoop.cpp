#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter Number you want to check Prime or Not"<<endl;

    cin>>n;
    bool flag=0;

    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }

    if(flag==0){
        cout<<"Number is Prime"<<endl;
    }
    else{
        cout<<"Number is not prime"<<endl;
    }
    return 0;
}