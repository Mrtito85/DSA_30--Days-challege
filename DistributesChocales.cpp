#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;


int solve(int arr[],int n,int m){

    sort(arr,arr+n);

    int s,e;
    s=0;
    e=m-1;
    int ans=INT_MAX;

    while( e<n-1){
        int temp=arr[e]-arr[s];
        ans=min(temp,ans);
        s++;
        e++;
        cout<<ans;
       


    }
    return ans;
}

int main(int argc, char const *argv[])
{
    int arr[]={7,2,3,4,9,12,56};
    int n=7;
    int m=3;

    int ans=solve(arr,n,m);
    cout<<"THe Minimum Difference is "<<ans;
    return 0;
}
