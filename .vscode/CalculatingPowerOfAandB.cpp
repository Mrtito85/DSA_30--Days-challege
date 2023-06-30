#include <iostream>
using namespace std;

int main()
{
  int a,b;
  cout<<"Enter Value of A and B to Calulate power of a and b"<<endl;
  cin>>a>>b;

  int ans=1;
  for(int i=1;i<=b;i++){
    ans=ans*a;
  }
  cout<<ans<<endl;

        return 0;
}