#include<iostream>
using namespace std;

#define MAX_SIZE 100001
char stack[MAX_SIZE];
int top = -1;

void push(char s){ stack[++top] = s; }

void pop(){ stack[top--] = 0; }

int main(){
  int sum = 0;
  string str;
  cin >> str;
  for(int i = 0; i < str.length(); i++){
    if(str[i] == '('){
      push(str[i]);
    } else if(str[i] == ')' && str[i-1] == '('){
        pop();
        sum += (top+1);
    } else{
      sum++;
      pop();
    }
  }
  cout << sum << '\n';
  return 0;
}