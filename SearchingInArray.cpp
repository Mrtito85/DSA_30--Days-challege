#include <iostream>
using namespace std;
bool Linearsearch(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(key==arr[i]){
            return true;
        }
    }
    return false;
}

int main(int argc, char const *argv[])
{
    int number[10]={2,3,45,6,7,8,5,3,2,2};
    int size  =10;
    if(Linearsearch(number,size,55)){
        cout<<"FInd the Element "<<endl;

    }
    else{
        cout<<"Can't find element";
    }
    return 0;
}
