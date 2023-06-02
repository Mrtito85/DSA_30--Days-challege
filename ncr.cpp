#include <iostream>
using namespace std;

int foctorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}


int ncr(int n,int r){

    int num=foctorial(n);
    int denomiator=foctorial(r)*foctorial(n-r);
    return num/denomiator;


}

int main(int argc, char const *argv[])
{
    int n;
    int r;

    cin>>n>>r;

    int ans=ncr(n,r);
    cout<<ans;
    return ans;
    return 0;
}
