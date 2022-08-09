#include<stdio.h>

#define MAX_SIZE 1001
#define DIVISION 10007
#define min(a, b)(a > b ? b : a)

int main(){
    int n, k, dp[MAX_SIZE][MAX_SIZE] = {0, };
    scanf("%d %d", &n, &k);
    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= n; j++){
            dp[i][j] = i == j || j == 0 ? 1 : (dp[i - 1][j] + dp[i - 1][j - 1]) % DIVISION; 
        }
    }
    printf("%d\n", dp[n][k]);
    return 0;
}