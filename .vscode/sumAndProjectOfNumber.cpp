#include <iostream>
using namespace std;

int main(){


    int num=234;


    int mul=1;
    int sum=0;
    while(num!=0){
        int digit=num%10;
        num=num/10;
        mul=mul*digit;
        sum=sum+digit;
       
    }
    cout<<mul<<endl;
    cout<<sum<<endl;
    int ans=mul-sum;
    cout<<"Ans of the product and sum is "<<ans;

    return 0;
}