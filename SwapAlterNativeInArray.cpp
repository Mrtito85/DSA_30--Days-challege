#include <iostream>
using namespace std;


void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void SwapAlternative(int arr[],int size){

    for(int i=0;i<size;i+=2){

        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}


int main(int argc, char const *argv[])
{
    int arr[5]={1,2,3,4,5};
    int size=5;

    SwapAlternative(arr,size);
    printArray(arr,size);
    
    return 0;
}
