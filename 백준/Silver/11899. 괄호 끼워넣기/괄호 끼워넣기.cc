#include<iostream>
using namespace std;

#define MAX_SIZE 51

char stack[MAX_SIZE];
int top = -1;

void push(char s){ stack[++top] = s; }

void pop() { stack[top--] = 0; }

int main(){
  string str;
  int answer = 0;
  cin >> str;
  for(int i = 0; i < str.length(); i++){
     if(str[i] == '('){
        push(str[i]);
      } else if(top == -1){
       answer++;
      } else if(str[i] == ')'){
        pop();
      }
  }
  cout << (answer + (top + 1)) << '\n';
  return 0;
}