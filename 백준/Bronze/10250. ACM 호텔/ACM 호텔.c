#include<stdio.h>

int main(){
  int n, h, w, m;
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    scanf("%d %d %d", &h, &w, &m);
    if(m % h == 0) printf("%d%02d\n", h, m / h);
    else printf("%d%02d\n", m % h, m / h + 1);
  }
  return 0;
}