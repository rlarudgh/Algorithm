#include<stdio.h>

int main(){
  int n, cnt = 0;
  scanf("%d", &n);
  for(int i = 1; i <= n; i *= 10){
    cnt += n - i + 1;
  }
  printf("%d\n", cnt);
  return 0;
}