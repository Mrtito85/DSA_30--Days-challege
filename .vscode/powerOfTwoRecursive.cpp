#include <iostream>
using namespace std;

int power(int n){
  if(n==0){
    return 1;
  }

  return 2*power(n-1);
}

int main() {
int n;
  cout<<"Enter Power of 2 you want to print "<<endl;
  cin>>n;
  int ans=power(n);
  cout<<ans<<endl;

}