#include<stdio.h>

#define min(a, b) (a < b ? a : b)

int main(){
    int n, arr[1001][3] = {0, }, dp[1001][3] = {0, };
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= 2; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    dp[1][0] = arr[1][0];
    dp[1][1] = arr[1][1];
    dp[1][2] = arr[1][2];
    for(int i = 2; i <= n; i++){
        dp[i][0] = min(dp[i-1][1], dp[i-1][2]) + arr[i][0];
        dp[i][1] = min(dp[i-1][0], dp[i-1][2]) + arr[i][1];
        dp[i][2] = min(dp[i-1][0], dp[i-1][1]) + arr[i][2];
    }
    printf("%d\n", min(min(dp[n][0], dp[n][1]), dp[n][2]));
    return 0;
}