#include <iostream>
using namespace std;


bool FindKey(int arr[],int size,int key){
  if(size==0){
    return false;
  }
  if(key==arr[0]){
    return true;
  
  }

 bool ans= FindKey(arr+1,size-1,key);
  return ans;
}

int main() {

int arr[5]={1,2,3,4,5};
  int size=5;
  int key=11;
  bool ans=FindKey(arr,size,key);
  if(ans){
    cout<<"Key is Present in the Array"<<endl;
  }
  else{
    cout<<"key is not Present in the Array"<<endl;
  }
}