#include <iostream>
using namespace std;


int GetPivot(int arr[],int size){

    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;

    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;

    }
    return s;
}

int main(int argc, char const *argv[])
{
    int arr[]={5,6,7,8,1,2};
    int size=6;
    int ans=GetPivot(arr,size);
    cout<<ans;
    cout<<"print";
    return 0;
}
