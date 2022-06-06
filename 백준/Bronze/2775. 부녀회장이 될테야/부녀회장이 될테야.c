#include<stdio.h>

#define MAX 15

int main(){
  int arr[MAX][MAX] = {0, }, T, k, n;
  for(int i = 0; i < MAX; i++) arr[0][i] = i;
  for(int i = 1 ; i< MAX; i++) for(int j = 1; j < MAX; j++) arr[i][j] = arr[i-1][j] + arr[i][j-1];
  scanf("%d", &T);
  for(int i = 0; i < T; i++){
    scanf("%d %d", &k, &n);
    printf("%d\n", arr[k][n]);
  }
  return 0;
}