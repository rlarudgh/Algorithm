#include<stdio.h>

#define true 1
#define false 0

int main(){
  int n, check;
  int arr[2] = {0, };
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    scanf("%d", &check);
    arr[check] += 1;
  }
  printf(arr[true] > arr[false] ? "Junhee is cute!\n" : "Junhee is not cute!\n");
  return 0;
}