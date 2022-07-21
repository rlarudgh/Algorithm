#include<stdio.h>

#define MAX 1001
#define DIV 10007

int main(){
    int dp[MAX], n;
    dp[0] = 1;
    dp[1] = 3; 
    scanf("%d", &n); 
    for(int i = 2; i <= n; i++) dp[i] =  ((2 * dp[i - 2]) + dp[i - 1]) % DIV;
    printf("%d\n", dp[n-1]);
    return 0;
}

// 1 3 5