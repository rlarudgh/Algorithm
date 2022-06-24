#include<stdio.h>
#include<stdlib.h>

#define MAX 100000
#define true 1
#define false 0

int stack[MAX];
int top = -1;

int isEmpty(){
  return top == -1 ? true : false;
}

void push(int data){
  stack[++top] = data;
}

void pop(){
  if(isEmpty()) return;
  else stack[top--] = 0;
}

int main(){
  int n, sum = 0;
  scanf("%d", &n);
  int *arr = (int*)malloc(sizeof(int) * n);
  for(int i = 0; i < n; i++){
    scanf("%d", &arr[i]);
    if(arr[i] == 0){
      pop();
    } else{
      push(arr[i]);
    }
  }
  for(int i = 0; i <= top; i++) {
    sum += stack[i];
  }
  printf("%d\n", sum);
  return 0;
}