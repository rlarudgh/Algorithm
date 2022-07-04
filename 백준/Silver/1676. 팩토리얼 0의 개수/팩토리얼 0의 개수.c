#include<stdio.h>

int main(){
  int n, a = 0, b = 0, c = 0;
  scanf("%d", &n);
  a = n/5;
  b = n/25;
  c = n/125;
  printf("%d\n", (a + b) + c);
  return 0;
}