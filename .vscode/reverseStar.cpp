#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter Star you want to print ";
    cin>>n;

    int i=1;

    while(i<=n){
        
        int j=1;
        int less=i;
        while(j<=n-less+1){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}