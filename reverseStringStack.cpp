#include <iostream>
#include <stack>

using namespace std;

int main() {

  string name = "zahid ali";
  stack<char> s;

  for (int i = 0; i < name.length(); i++) {
    char ch = name[i];
    s.push(ch);
  }

  string ans="";

  while(!s.empty()){
    char top=s.top();
    ans.push_back(top);
    s.pop();
  }


  cout<<ans<<endl;
}