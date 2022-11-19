#include<stdio.h>
#include<stdlib.h>

int compare(const void* a, const void* b){
  return *(int *)a > *(int *)b ? 1 : *(int*)a < *(int*)b ? -1 : 0;
}

int main(){
  int n;
  scanf("%d", &n);
  int *arr = (int *)malloc(sizeof(int) * n);
  for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
  qsort(arr, n, sizeof(int), compare);
  for(int i = 0; i < n; i++) printf("%d\n", arr[i]);
  free(arr);
  return 0;
}