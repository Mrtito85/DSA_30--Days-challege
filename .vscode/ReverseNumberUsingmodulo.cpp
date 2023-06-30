#include <iostream>
#include <math.h>
using namespace std;

int main(){

int n;
  cout<<"Enter Number YOu want to reverse "<<endl;
  cin>>n;

  while(n!=0){
    int reverseAns=n%10;
    //cout<<reverseAns<<" ";
   
    n=n/10;
     cout<<reverseAns<<" ";
  }

    return 0;

}