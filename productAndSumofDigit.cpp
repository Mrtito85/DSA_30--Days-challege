#include <iostream>
using namespace std;

//Subtract the Product and Sum of Digits of an Integer

int productAndSumOfNumber(int num){
    int product=1;
    int sum =0;
    while (num!=0)
    {
        /* code */
        int digit=num%10;
        product=product*digit;
        sum=sum+digit;
        num=num/10;
    }
    int ans=product-sum;
    cout<<ans;
    
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;

    int ans=productAndSumOfNumber(n);
    return ans;
    return 0;
}
