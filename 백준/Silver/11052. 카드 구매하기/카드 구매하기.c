#include<stdio.h>

#define MAX_SIZE 1001
#define MAX(a, b)(a > b ? a : b)

int main(){
    int n, dp[MAX_SIZE], arr[MAX_SIZE];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    dp[0] = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            dp[i] = MAX(dp[i],dp[i - j]+arr[j - 1]);
        }
    }
    printf("%d\n", dp[n]);
}