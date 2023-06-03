#include <iostream>
using namespace std;
void ReverseArray(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(int argc, char const *argv[])
{
    int arr[6]={1,2,3,4,5,6};
    int size=6;
    ReverseArray(arr,size);
    printArray(arr,size);

    return 0;
}
