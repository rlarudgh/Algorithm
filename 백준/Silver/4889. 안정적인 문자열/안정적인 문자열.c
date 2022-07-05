#include<stdio.h>
#include<string.h>

char s[2001];
int top = -1;

int empty(){
  return top == -1;
}

void push(char str){
  s[++top] = str;
}

void pop(){
  if(empty()) return;
  else s[top--] = '\0';
}

char checkTop(){
  return s[top];
}

int main(){
  char str[2001];
  int cnt = 0, result;
  while(1){
    scanf("%s", str);
    result = 0;
    if(str[0] == '-') break;
    for(int i = 0; i < strlen(str); i++){
      if (str[i] == '}' && !empty() && checkTop() == '{'){
        pop();
      } else push(str[i]);
    }
    while(!empty()){
      char q = checkTop();
      pop();
      char w = checkTop();
      pop();
      result += q == w ? 1 : 2;
    }
    printf("%d. %d\n", ++cnt, result);
  }
}