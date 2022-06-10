#include<stdio.h>
#include<stdlib.h>

int main(){
  int k, n;
  long long max = 0, cnt = 0;
  scanf("%d %d", &k, &n);
  long long* list = (long long *)malloc(sizeof(long long) * k);
  for(int i = 0; i < k; i++){
    scanf(" %lld", &list[i]);
		if (list[i] > max) max = list[i];
  }
  long long mid, left = 1, right = max;
  while(left <= right){
    mid = (left+ right) /2;
    for(int i = 0; i < k; i++) cnt += list[i] / mid;
    if (cnt < n) right = mid - 1;
		else left = mid + 1;
    cnt = 0;
  }
  printf("%lld\n", right);
  return 0;
}