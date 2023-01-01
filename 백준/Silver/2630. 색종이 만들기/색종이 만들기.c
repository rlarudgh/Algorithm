#include<stdio.h>

#define MAX_SIZE 129

int arr[MAX_SIZE][MAX_SIZE] = {0,};
int color[2] = {0,};

void compare(int value) { 
  if(value >= 0) color[value]++;
}

int find(int n, int x, int y) {
  if(n == 1){
    return arr[x][y];
  }
  
  int divide = n / 2;
  int a = find(divide, x, y); // 왼쪽 위
  int b = find(divide, x + divide, y); // 오른쪽 위
  int c = find(divide, x, y + divide); // 왼쪽 아래
  int d = find(divide, x + divide, y + divide); // 오른쪽 아래
  
  if(a == b && a == c && a == d){
    return a;
  }
  
  compare(a);
  compare(b);
  compare(c);
  compare(d);
  return -1;
}

int main(){
  int n;
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      scanf("%d", &arr[i][j]);
    }
  }
  
  int answer = find(n, 0, 0);
  compare(answer);

  printf("%d\n%d", color[0], color[1]);
  
  return 0;
}