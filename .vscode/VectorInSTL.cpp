#include <iostream>
#include <limits.h>
#include <array>
#include <vector>
using namespace std;

int main(){

  vector<int> v(5,11);
  v.push_back(3);
  v.push_back(2);
  v.push_back(1);
  for(int i:v){
    cout<<i<<" ";
  }
  cout<<endl;
  cout<<"Front Element of the Array  is "<<v.front()<<endl;
  cout<<"Back Element of the Array is "<<v.back()<<endl;

  return 0;
}