#include <iostream>
#include <limits.h>
#include <array>
using namespace std;

int main(){

  array<int,4> a={1,23,4,5};
 // a[1]=2;
  cout<<"Size of Array "<<a.size()<<endl;
  cout<<"Element at Index 2 "<<a.at(2)<<endl;
   cout<<"Array is empty or Not "<<a.empty()<<endl;
  for(int i=0;i<a.size();i++){
    cout<<a[i]<<endl;
  }
 cout<< a.back();
cout<<  a.front();
  
  return 0;
}