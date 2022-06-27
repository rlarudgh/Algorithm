#include<stdio.h>

int main(){
  int k, d, a;
  scanf("%d/%d/%d", &k, &d, &a);
  printf("%s", k + a < d || d == 0 ? "hasu\n" : "gosu\n");
  return 0;
}