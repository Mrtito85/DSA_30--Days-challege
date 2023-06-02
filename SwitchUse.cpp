#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cin>>num;

    switch(num){
        case 1:
        cout<<"First case in the switch statement"<<endl;
        break;
        case 2:
        cout<<"Second case in the switch statement"<<endl;
        break;
        default:
        cout<<"This is a default case"<<endl;
    }
    return 0;
}
