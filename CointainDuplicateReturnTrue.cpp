#include <iostream>
#include<algorithm>
using namespace std;


bool solve(int arr[],int size){


    sort(arr,arr+size);

    for(int i=0;i<size;i++){
        if(arr[i]==arr[i+1]){
            return true;
        }
    }
    return false;


}
int main(int argc, char const *argv[])
{
    int arr[]={12,323,21,1};

    int size=4;
    bool ans=solve(arr,size);
    cout<<"The Ans is "<<ans;
    return 0;
}
