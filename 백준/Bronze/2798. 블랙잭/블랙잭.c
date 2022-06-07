#include<stdio.h>

int main(){
  int n, m, num[100], sum = 0, max = 0, temp = 0; 
  scanf("%d %d", &n, &m);
  for(int i = 0; i < n; i++){
    scanf("%d", &num[i]);
  }
  for(int i = 0 ; i < n; i++){
    for(int j = i+1; j < n; j++){
      for(int k = j+1; k < n; k++){
        sum = num[i] + num[j] + num[k];
        sum > max && sum <= m ? max = sum : temp++;
      }
    }
  }
  printf("%d\n", max);
  return 0;
}