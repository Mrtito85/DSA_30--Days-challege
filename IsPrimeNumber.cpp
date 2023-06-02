#include <iostream>
using namespace std;

bool isPrime(int num){
    int flag=true;

    for(int i=2;i<num;i++){
        if(num%i==0){
            flag=false;
            return false;
        }

    }
    return true;
}
int main(int argc, char const *argv[])
{
    int num;
    cin>>num;

    if(isPrime(num)){
        cout<<"number is Prime"<<endl;
    }
    else{
        cout<<"Not Prime"<<endl;
    }
    return 0;
}
