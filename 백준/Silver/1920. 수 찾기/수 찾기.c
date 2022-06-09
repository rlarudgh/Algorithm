#include<stdio.h>
#include<stdlib.h>

#define true 1
#define false 0

int compare(const void* a, const void* b){
  return *(int *)a > *(int *)b ? 1 : (*(int *)a < *(int *)b ? -1 : 0);
}

int binarySearch(int arr[], int temp, int size){
  int front, rear, pivot;
  front = 0;
  rear = size - 1;
  while (1) {
    pivot = (front + rear) / 2;
    if (arr[pivot] == temp) return 1;
    if (arr[front] == temp) return 1;
    if (arr[rear] == temp) return 1;
    if(arr[pivot] < temp) front = pivot + 1;
    else rear = pivot - 1;
    if (front >= rear) return 0;
  }
}

int main(){
  int n, m;
  scanf("%d", &n);
  int *arr = (int*)malloc(sizeof(int) * n);
  for(int i = 0; i < n; i++){
    scanf("%d", &arr[i]);
  }
  scanf("%d", &m);
  int *arr1 = (int*)malloc(sizeof(int)*m);
  for(int i = 0; i < m; i++){
    scanf("%d", &arr1[i]);
  }
  qsort(arr, n, sizeof(int), compare);
  for(int i = 0; i < m; i++){
    printf("%d\n", binarySearch(arr, arr1[i], n));
  }
  return 0;
}