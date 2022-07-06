#include<stdio.h>

int main(){
  long long int dp[10001] = {0, };
  int n;
  scanf("%d", &n);
  dp[0] = 0;
  dp[1] = 1;
  if(n == 1){
    printf("%lld\n", dp[1]);
    return 0;
  } else if(n == 0){
    printf("%lld\n", dp[0]);
    return 0;
  }
  for(int i = 2; i <= n; i++){
    dp[i] = (dp[i-1] + dp[i-2]);
  }
  printf("%lld\n", dp[n]);
  return 0;
}