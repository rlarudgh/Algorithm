#include<stdio.h>

#define MAX 1001
#define DIVISION 10007

int main(){
    int dp[MAX], n;
    dp[0] = 1;
    dp[1] = 2;
    scanf("%d", &n);
    for(int i = 2; i<= n; i++) dp[i] = (dp[i - 1] + dp[i -2]) % DIVISION;
    printf("%d\n", dp[n-1]);
    return 0;
}

// 1 2 9