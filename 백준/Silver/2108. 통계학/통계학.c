#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int compare(const void *a, const void *b) {
    int num1 = *(int *)a;
    int num2 = *(int *)b; 
    if (num1 < num2) return -1;
    if (num1 > num2) return 1;
    return 0;
}

int average(int list[], int listSize){
  double sum = 0;
  for(int i = 0; i < listSize; i++){
    sum += list[i];
  }
  return round(sum / listSize);
}

int middle(int list[], int listSize){
  return listSize != 1 ? list[(listSize + 1) / 2 - 1] : list[listSize - 1];
}

int mode(int list[], int n){
  int arr[8001] = {0}, index, max = 0, cnt = 0;
  for(int i = 0; i < n; i++){
		index = list[i] + 4000;
		arr[index] += 1;
    if(arr[index] > max) max = arr[index];
	}
  index = 0; // 초기화
  for(int i = 0; i < 8001 ; i++){
		if(arr[i] == 0) continue;
		if(arr[i] == max){
			if (cnt == 0) {
				index = i;
				cnt += 1;
			} else if (cnt == 1) {
				index = i;
				break;
			}
		}
	}
  return (index - 4000);
}

int range(int arr[], int n){
  if(n != 1){
    int max = arr[n-1], min = arr[0];
    return (max - min);
  } else if(n == 1) return 0;
}

int main(){
  int size = 0;
  scanf("%d", &size);
  int * arr = (int *) malloc(sizeof(int*)* size);
  for(int i = 0; i < size; i++){
    scanf("%d", &arr[i]);
  }
  qsort(arr, size, sizeof(int), compare); // 퀵 정렬
  
  printf("%d\n", average(arr, size)); // 산술평균
	printf("%d\n", middle(arr, size)); // 중앙값
	printf("%d\n", mode(arr, size)); // 최빈값
	printf("%d\n", range(arr, size)); // 범위
  return 0;
}