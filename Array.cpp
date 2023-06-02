#include <iostream>
using namespace std;

void printArray(int number[],int size){
    for(int i=0;i<size;i++){
        cout<<number[i]<<" ";
    }
}
void printArraych(char ch[],int size){
    for(int i=0;i<size;i++){
        cout<<ch[i]<<" ";

    }
}

int main(int argc, char const *argv[])
{
    int number[15]={1,23,3};
    int size=15;

    printArray(number,size);

    char ch[5]={'d','r','f','f','d'};
    printArraych(ch,5);
   
    return 0;
}
