#include <iostream>
#include <limits.h>
using namespace std;

void print(int arr[], int size) {

  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
}

int FindPivot(int arr[],int size){
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


int main() {

  int arr[]={7,8,9,10,1,2};
  int size =5;
  int ans=FindPivot(arr,size);
  cout<<ans;
  return 0;
}