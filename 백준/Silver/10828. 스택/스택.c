#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_SIZE 10000

int stack[MAX_SIZE];
int top = 0;

int isEmpty(){
  return top == 0 ? 1 : 0;
}

void push(int data){
  stack[top] = data;
  top += 1;
}

int pop(){
  if(isEmpty()){
    return -1;
  } else {
    top -= 1;
  }
  return stack[top];
}

int Top(){
  if(isEmpty()){
    return -1;
  } 
  return stack[top-1];
}

int main(){
  int size, data;
  char c[5] = {0, };
  scanf("%d", &size);
  for(int i = 0; i < size; i++){
    scanf("%s", c);
    if(!strcmp(c,"push")){
            scanf("%d",&data);
            push(data);
        }
        else if(!strcmp(c,"pop")){
            printf("%d\n", pop());
        } 
        else if(!strcmp(c,"empty")){
            printf("%d\n", isEmpty());
        }
        else if(!strcmp(c,"size")){
            printf("%d\n", top);
        }
        else if(!strcmp(c,"top")){
            printf("%d\n", Top());
        }
  }
}