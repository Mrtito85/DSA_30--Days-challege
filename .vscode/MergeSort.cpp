#include <iostream>
using namespace std;

void Merge(int arr[],int s,int e){
  int mid=(s+e)/2;

  //Length of Array
  int len1=mid-s+1;
  int len2=e-mid;

  //array dynamically
  int *first=new int[len1];
  int *second=new int[len2];

  //Copy Value in Array
  int k=s;
  for(int i=0;i<len1;i++){
    first[i]=arr[k++];
  }
    //Copy Value in Array
  k=mid+1;
  for(int i=0;i<len2;i++){
    second[i]=arr[k++];
  }


  //Merge two SOrted Array

  int index1=0;
  int index2=0;

  k=s;
  while(index1<len1&& index2<len2){
    if(first[index1]<second[index2]){
      arr[k++]=first[index1++];
    }
    else{
      arr[k++]=second[index2++];
    }
  }
  while(index1<len1){
    arr[k++]=first[index1++];
  }
  while(index2<len2){
    arr[k++]=second[index2++];
  }
  

  
}
void MergeSort(int arr[],int s,int e,int size){

  //Base Case 
  if(s>=e){
    return ;
  }
  
  int mid=(s+e)/2;
  //Recusive call for left
  MergeSort(arr,s,mid,size);

  //Right Recurive call

  MergeSort(arr,mid+1, e, size);

  //Merge An Array

  Merge(arr,s,e);
  
}


int main(){
  int arr[]={12,3,4,55,22,1};
  int size=6;
  int s=0;
  int e=size-1;
  MergeSort(arr,s,e,size);
    for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}