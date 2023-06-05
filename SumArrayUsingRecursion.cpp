#include <iostream>
using namespace std;

int sumArray(int arr[],int size){
  if(size==0){
    return -1;
  }
  if(size==1){
    return arr[0];
  }

  int remainSum=sumArray(arr+1,size-1);
    int sum=arr[0] + remainSum;
  return sum;
  
  

  
}

int main() {

int arr[5]={1,2,3,4,5};
  int size=5;
  int sum;
  int ans=sumArray(arr,size);
  cout<<ans;
}