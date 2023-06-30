#include<iostream>
#include<algorithm>
#include<climits>


using namespace std;

int MaximumSumOfSubArray(int arr[],int size){

    int sum=0;
    int Maxi=INT_MIN;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
        if(sum>Maxi){
            Maxi=sum; 
        }
        if(sum<0){
            sum=0;
        }

    }
    return Maxi;
}

int main(int argc, char const *argv[])
{
    int arr[]= {-2,1,-3,4,-1,2,1,-5,4};
    int size=7;

    int ans=MaximumSumOfSubArray(arr,size);
    cout<<"MaxiMum sum is "<<ans;
    return 0;
}
