#include<stdio.h>

#define MAX_SIZE 1000001
int arr[MAX_SIZE];

int find(int x){ 
    if (x == arr[x]) return x;
    else return arr[x] = find(arr[x]);
}

void input(int a, int b){
  arr[a] = b;
}

int main(){
  int n, m, o, a, b;
  scanf("%d %d", &n, &m);
  for(int i = 0; i <= n; i++) arr[i] = i;
  for(int i = 0; i < m; i++){
    scanf("%d %d %d", &o, &a, &b);
    if (o == 0) {
      a = find(a);
      b = find(b);
      a > b ? input(a, b) : input(b, a);
    } else {
      a = find(a);
      b = find(b);
      printf(a == b ? "YES\n" : "NO\n");
    }
  }
  return 0;
}