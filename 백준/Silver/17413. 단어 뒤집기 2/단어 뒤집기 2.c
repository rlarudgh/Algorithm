#include<stdio.h>
#include<string.h>

#define MAX_SIZE 100001
#define true 1
#define false 0
char stack[MAX_SIZE];
int top = -1;

void push(char data){
  stack[++top] = data;
}

void spop(){
  top--;
}

void sprint(){
  while(top != -1){
    printf("%c", stack[top]);
    spop();
  }
}

int main(){
  char str[MAX_SIZE];
  scanf("%[^\n]s", str);
  int len = strlen(str);
  for(int i = 0; i < len; i++){
    if(str[i] == '<'){
      sprint();
      while(true){
        printf("%c", str[i]);
        if(str[i] == '>') break;
        i += 1;
      }
    } else if(str[i] == ' '){
      sprint();
      printf(" ");
    } else {
      push(str[i]);
    }
  }
  sprint();
}