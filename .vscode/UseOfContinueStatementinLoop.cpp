#include <iostream>
using namespace std;

int main(){


    for(int i=0;i<10;i++){
      
      continue;
        if(i==5){
            continue;
        }
          cout<<i;
    }
    return 0;
}