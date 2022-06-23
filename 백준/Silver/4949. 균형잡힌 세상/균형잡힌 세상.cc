#include<iostream>
#include<stack>

using namespace std;

int main(){
  string str;

  while(1){
    stack<char> stack;  
    bool a = true;
    getline(cin, str);
    if(str == ".") break;
    for (int i = 0; i < str.length(); i++) {
      if(str[i] == '(' || str[i] == '['){
        stack.push(str[i]);
      }
      if(str[i] == ')'){
        if(stack.empty() || stack.top() == '[') a = false ;
        else stack.pop();
      }
      if(str[i] == ']'){
        if(stack.empty() || stack.top() == '(') a = false ;
        else stack.pop();
      }
    }
    if (stack.empty() && a) printf("yes\n");
    else printf("no\n");
  };
  return 0;
}