#include<stdio.h>

int main(){
  int price, n, goods, number, sum = 0;
  scanf("%d", &price);
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    scanf("%d %d", &goods, &number);
    int temp = goods * number;
    sum += temp;
  }
  printf("%s", sum == price ? "Yes" : "No");
  return 0;
}