#include <iostream>
#include <limits.h>
using namespace std;


void print(int arr[],int size){
  
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
}
void swapAlternative(int *arr,int size){
  for(int i=0;i<size;i+=2){
    if(i+1<size){
      int temp=arr[i];
      arr[i]=arr[i+1];
      arr[i+1]=temp;
    }
  }
  cout<<endl;
}


int main(){
  int arr[]={1,2,3,4,5,6,7,8};
  int size=8;
  swapAlternative(arr,size);
  print(arr,size);
}