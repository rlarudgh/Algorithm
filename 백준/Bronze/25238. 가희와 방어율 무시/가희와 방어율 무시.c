#include<stdio.h>

int main(){
  double a, b;
  scanf("%lf %lf", &a, &b);
  printf(a * (100 - b) / 100 >= 100 ? "0\n" : "1\n");
  return 0;
}