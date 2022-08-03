#include <stdio.h>
#define max(a, b)(a > b ? a : b)
#define MAX_SIZE 103
#define MAX 100003

int dp[MAX_SIZE][MAX], w[MAX_SIZE], v[MAX_SIZE];

int main() {
  int n, k;
  scanf("%d %d", &n, &k);
  for (int i = 0; i < n; i++) scanf("%d %d", &w[i + 1], &v[i + 1]);
  for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= k; j++) {
        dp[i][j] = (j - w[i] >= 0) ? max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]) : dp[i - 1][j];
      }
  }
  printf("%d\n", dp[n][k]);
  return 0;
}

/*
4 7
6 13
4 8
3 6
5 12
answer => 14
*/