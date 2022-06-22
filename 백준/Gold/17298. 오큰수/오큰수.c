#include<stdio.h>
#include<stdlib.h>

int main(){
  int n, tmp = 0, temp = 0, i;
  scanf("%d", &n);
  int *arr = (int *)malloc(sizeof(int) * n);
  int *stack = (int *)malloc(sizeof(int) * n);
  for (i = 0, tmp = 0; i < n; i++, tmp++){
    scanf("%d", &arr[i]);
    for (temp = tmp - 1; temp > -1; temp--) {
      if(arr[stack[temp]] >= arr[i]) break;
      if(arr[stack[temp]] < arr[i]) {
        arr[stack[temp]] = arr[i];
        tmp--;
      }    
    }
    stack[tmp] = i;
  }
  for(i = 0; i < tmp; i++){
    arr[stack[i]] = -1;
    printf("%d ", arr[i]);
  }
  for(i = tmp; i < n; i++) printf("%d ", arr[i]);
  return 0;
}