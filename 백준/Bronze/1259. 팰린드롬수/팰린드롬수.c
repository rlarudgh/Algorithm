#include <stdio.h>
#include <string.h>

#define true 1
#define false 0

int main(){
  int num;
  scanf("%d", &num);
  while(num){
    int rem, reverse = 0;
    int temp = num;
    while(temp != 0){
      rem = temp % 10;
      reverse *= 10;
      reverse += rem;
      temp /= 10;
    }
    if(reverse == num) printf("yes\n");
    else printf("no\n");
    scanf("%d", &num);
  }
  return 0;
}