#include <stdio.h>

int main(void) {
  int n, hive = 0;
  scanf("%d", &n);
  while(n > 1){
    hive++;
    n = n-(6 * hive);
  }
  // if(n == 1) hive = 1;
  printf("%d\n", hive + 1);
}