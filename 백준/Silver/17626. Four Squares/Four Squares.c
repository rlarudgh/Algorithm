#include<stdio.h>

#define MAX 50001
#define SQR(x)(x*x)
#define min(a, b)(a < b ? a : b)

int main(){
    int n, dp[MAX], minvalue = 0;
    scanf("%d", &n);
    dp[1] = 1;
    for(int i = 2; i <= n; i++){
        minvalue = dp[i - 1] + 1;
        for(int j = 1; SQR(j) <= i; j++) minvalue = min(minvalue, dp[i - SQR(j)]);
        dp[i] = minvalue + 1;
    }
    printf("%d\n", dp[n]);
    return 0;
}