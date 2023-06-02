#include <iostream>
#include <math.h>
using namespace std;

int binaryToDecimal(int n){

int i=0;
int ans=0;
    while(n!=0){
        int bit =n&1;
         ans=(bit*pow(10,i))+ans ;
         n=n>>1;
         i++;
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;

   int ans= binaryToDecimal(n);
   cout<<ans;
   return ans;
    return 0;
}
