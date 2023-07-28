#include <iostream>
using namespace std;

int partition(int arr[],int s,int e){
  int pivot=arr[s];

  int count =0;
  for(int i=s+1;i<=e;i++){
    if(arr[i]<=pivot){
      count++;

    }
  }
  int pivotIndex=s+count;
  //swapin 
  swap(arr[pivotIndex],arr[s]);
  //Left element is small than pivot ans replace it from left and right
  int i=s;
  int j=e;
  while(i<pivotIndex&&j>pivotIndex){
    while(arr[i]<=pivot){
      i++;
    }
    while(arr[j]>pivot){
      j--;
    }
    if(i<pivotIndex&&j>pivotIndex){
      swap(arr[i++],arr[j--]);
    }

  }


   return pivotIndex; 
 

}


void QuickSort(int arr[],int s,int e){

//Base condition
if(s>=e){
  return ;
}
//Making partion at index 
int p=partition(arr,s,e);
//Left Sort from partition
QuickSort(arr,s,p-1);
  //Right side Partition of QuickSort
  QuickSort(arr,p+1,e);
}

int main() {
  int arr[]={2,3,23,2,1,3};
  int size=6;
  int s=0;
  int e=size-1;

  QuickSort(arr,s,e);

  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
}