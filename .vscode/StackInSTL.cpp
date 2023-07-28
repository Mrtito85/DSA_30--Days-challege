#include <iostream>
#include <limits.h>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <stack>

using namespace std;

int main(){
  stack<string> s;
  s.push("zahid");
  s.push("Akbar");
  s.push("Ali");

  cout<<"Top Element of Stack is " <<s.top()<<endl;
  cout<<"Size of Stack is "<< s.size();


  return 0;
}