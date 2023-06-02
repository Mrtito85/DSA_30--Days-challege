#include <iostream>
#include <math.h>
using namespace std;

int reverseNumber(int n){
    int ans=0;
    int i=0;
    while (n!=0)
    {
        int digit=n%10;
        ans=(ans *10)+digit;
      //  cout<<ans;
        n=n/10;
        i++;

        /* code */
    }
    return ans;
    
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int ans =reverseNumber(n);
   cout<<ans;
    return ans;
    return 0;
}
