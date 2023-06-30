#include <iostream>
#include <limits.h>
using namespace std;

int GetSum(int arr[],int size){
  int sum=0;
  for(int i=1;i<=size;i++){
    sum=sum+i;
  }
  return sum;
}



int main(){

  int arr[]={1,2,3,4,5};

  int size=5;
  int ans=GetSum(arr,size);
  cout<<ans;
}