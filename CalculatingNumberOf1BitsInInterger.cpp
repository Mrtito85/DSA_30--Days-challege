#include <iostream>
using namespace std;



int numberOfBits(int n){
    int count =0;
    while(n!=0){
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    return count;

}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int ans=numberOfBits(n);
    cout<<ans;
    return ans;
    return 0;
}
