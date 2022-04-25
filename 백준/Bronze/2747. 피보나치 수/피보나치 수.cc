#include<stdio.h>

int main(){
  int n;
  int arr[46] = {0, };
  arr[1] = 1;
  scanf("%d", &n);
  for(int i = 2;i<=n;i++){
    arr[i] = arr[i-1] + arr[i-2];
  }
  printf("%d\n", arr[n]);
  return 0;
}