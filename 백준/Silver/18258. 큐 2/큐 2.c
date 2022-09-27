#include<stdio.h>
#include<string.h>

#define MAX_SIZE 2000001
#define MAX_STR_LEN 10

int q[MAX_SIZE], front = 0, rear = -1;

void push(int value){
  q[++rear] = value;
}

void pop(){
  printf("%d\n", (rear - front + 1) != 0 ? q[front++] : -1);
}

void empty(){
  printf("%d\n", (rear - front + 1) == 0 ? 1 : 0);
}

int main(){
  int n, value;
  char str[MAX_STR_LEN];
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    scanf("%s", str);
    if(!strcmp(str,"push")){
      scanf("%d", &value);
      push(value);
    } else if(!strcmp(str,"pop")) {
      pop();
    } else if(!strcmp(str,"size")) {
      printf("%d\n", rear - front + 1);
    } else if(!strcmp(str,"empty")) {
      empty();
    } else if(!strcmp(str,"front")){
      printf("%d\n", (rear - front + 1) != 0 ? q[front] : -1);
    } else if(!strcmp(str,"back")){
      printf("%d\n", (rear - front + 1) != 0 ? q[rear] : -1);
    }
  }
}