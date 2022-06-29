#include<stdio.h>

int a, b, n;

int result(int n){
  a %= b;
  printf("a : %d, b : %d\n", a, b);
  a *= 10;
  if(n == 1 ){
    return (a / b);
  } else{
    return result(n-1);
  }
}

int main(){
  int results;
  scanf("%d %d %d", &a, &b, &n);
  for(int i = 0; i < n; i++){
    int result;
    a %= b;
    a *= 10;
    results = a / b;
  }
  printf("%d\n", results);
  return 0;
}