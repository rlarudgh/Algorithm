#include<stdio.h>

#define MAX_SIZE 36

typedef long long ll;

int main(){
    int n;
    ll dp[MAX_SIZE] = {0, };
    dp[0] = 1;
    scanf("%d", &n);
    for(int i = 1; i < n + 1; i++) for(int j = 0; j < i; j++) dp[i] += dp[j] * dp[i - j - 1]; 
    printf("%lld\n", dp[n]);
    return 0;
}