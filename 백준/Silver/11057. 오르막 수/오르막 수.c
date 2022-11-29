#include<stdio.h>

typedef long long ll;
#define MAX_SIZE 11;
#define DIV 10007;

int main(){
  int n;
  ll answer = 0;
  ll dp[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  scanf("%d", &n);
  if(n == 1) printf("10\n");
  else {
    for(int i = 0; i < n - 2; i++){
      for(int j = 1; j < 10; j++){
        dp[0] = 1;
        dp[j] = (dp[j - 1] + dp[j]) % DIV;
      }
    }
    for(int i = 0; i < 10; i++) answer += dp[i];
    printf("%lld", answer % 10007);
  }
  return 0;
}