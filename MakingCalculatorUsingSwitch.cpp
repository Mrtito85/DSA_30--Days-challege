#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a;
    int b;
    char ch;

    cin>>a>>b>>ch;

    switch(ch){
        case '-':
        cout<<a-b<<endl;
        break;
        case '+':
        cout<<a+b<<endl;
        break;
        case '/':
        cout<<a/b;
        break;


    }
    return 0;
}
