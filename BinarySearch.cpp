#include <iostream>
using namespace std;


int binarySearch(int arr[],int size,int key){
    int start=0;
    int end =size-1;
    int mid=(start+end)/2;
    while(start<=end){

        if(arr[mid]==key){
            return mid;
        }
        else if(key<arr[mid]){
            end =mid-1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }

        mid=(start+end)/2;

    }
    return -1;
    
}



int main(int argc, char const *argv[])
{
    int arr[]={1,2,3,4,5,7,8,9,11};

    int size =10;
    int key=11;
    int ans=binarySearch(arr,size,key);
    cout<<ans;
    return 0;
}
