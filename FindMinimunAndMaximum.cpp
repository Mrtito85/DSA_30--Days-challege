#include <iostream>
#include <limits.h>
using namespace std;

int findMax(int arr[],int size){
    int max=INT_MIN;

    for(int i=0;i<size;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;

}
int findMin(int arr[],int size){
    int min=INT_MAX;

    for(int i=0;i<size;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    return min;
}

int main(int argc, char const *argv[])
{
    int number[15]={3,4,3,3,43,3,2,34,34,34,3,3,3,3,4};

  int ans=  findMin(number,15);
  cout<<ans;

    return 0;
}
