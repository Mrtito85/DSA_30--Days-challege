#include <iostream>
using namespace std;

int powerOfNumber(int a,int b){
    int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;

}

int main(int argc, char const *argv[])
{



    int a;
    int b;
    cin>>a>>b;
    int ans=powerOfNumber(a,b);
    cout<<ans;


}
