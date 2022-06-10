#include<stdio.h>

int main(){
  int n, min = 666, temp = 0, tmp = 0, i = 1;
  scanf("%d", &n);
  while(i != n){
    temp = ++min;
    int count = 0;
    while(temp != 0){
      tmp = temp % 10;
      count = tmp == 6 ? count + 1 : 0;
      if(count >= 3) {
        i += 1;
        break;
      } 
      temp /= 10;
    }
  }
  printf("%d\n", min);
  return 0;
}