#include<stdio.h>
#include<stdlib.h>

int arr[501][501];

int main(){
  int n, m, b, inventory, remove, minTime = 1e9, maxHeight = -1;
  scanf("%d %d %d", &n, &m, &b);
  // int **arr = (int**)malloc(sizeof(int*) * m);
  // for(int i=0; i<n; i++){
  //   arr[i] = (int*)malloc(sizeof(int) * n);
  // }
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      scanf("%d", &arr[i][j]);
    }
  }
  for(int i = 0 ; i <= 256; i++){
    inventory = 0; 
    remove = 0;
    // 변수 초기화
    for(int j = 0; j < n; j++){
      for(int k = 0; k < m; k++){
        if(arr[j][k] - i < 0){
          inventory -= (arr[j][k] - i);
        } else {
          remove += (arr[j][k] - i);
        }
        // arr[j][k] - i < 0 ? inventory -= (arr[j][k] - i) : remove += (arr[j][k] - i);
      }
    }
    if(remove + b >= inventory){
      int tTime = 2 * remove + inventory;
			if (minTime >= tTime) {
				minTime = tTime;
				maxHeight = i;
			}
    }
  }
  printf("%d %d\n", minTime, maxHeight);
  return 0;
  // for(int i=0; i<n; i++){
  //   free(arr[i]);
  // }
  // free(arr);
}

/*
  예제 1
3 4 99
0 0 0 0
0 0 0 0
0 0 0 1

정답 : 2 0

  예제 2
3 4 1
64 64 64 64
64 64 64 64
64 64 64 63

정답 : 1 64

*/