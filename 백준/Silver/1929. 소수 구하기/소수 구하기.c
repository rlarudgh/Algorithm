#include<stdio.h>

int en[1000001] = { 1, 1, };

int main(){
  int n, m;
  scanf("%d %d",&n, &m);
  for(int i = 2; i <= m; i++) for(int j = 2; i*j <= m; j++) en[i*j] = 1;
  for(int i = n; i <= m; i++) if(en[i] == 0) printf("%d\n", i);
  return 0;
}