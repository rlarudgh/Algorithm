#include<stdio.h>
#include<stdlib.h>

int compare(const void* a, const void* b){
  return *(int *)a < *(int *)b ? -1 : *(int *)a > *(int *)b ? 1 : 0;
}

int count = 0;

int greed(int *arr, int n, int sum){
  sum += n * arr[count++];
  return n != 1 ? (greed(arr, n-1, sum)) : sum;
}

int main(){
  int n;
  scanf("%d", &n);
  int *arr = (int *)malloc(sizeof(int) * n);
  for(int i = 0 ;i < n;i++){
    scanf("%d", &arr[i]);
  }
  qsort(arr, n, sizeof(int), compare);
  printf("%d\n", greed(arr, n, 0));
  return 0;
}
