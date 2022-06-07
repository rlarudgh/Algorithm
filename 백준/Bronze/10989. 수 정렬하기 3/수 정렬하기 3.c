#include<stdio.h>
#include<stdlib.h>

#define SIZE 10001

int count[SIZE] = { 0 };

int main(){
  int n, num;
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    scanf("%d", &num);
    count[num] += 1;
  }
  for(int i = 0; i < SIZE; i++){
    if(count[i] != 0){
      for(int j = 0; j < count[i]; j++){
        printf("%d\n", i);
      }
    }
  }
  return 0;
}