#include <iostream>
#include <algorithm>
using namespace std;

struct  Pair
{
    /* data */
    int Min;
    int Max;
};


Pair GetMinMax(int arr[],int Size){

    Pair minMax;

    sort(arr,arr+Size);

    minMax.Min=arr[0];
    minMax.Max=arr[Size-1];
    return minMax;

}


int main(int argc, char const *argv[])
{
    int arr[]={2,34,52,13,2,45,1};
    int size=7;


    Pair ans=GetMinMax(arr,size);

    cout<<"The Minimum Value Is " <<ans.Min<<endl;
    cout<<"The Maximum Value is "<< ans.Max;



    return 0;
}
