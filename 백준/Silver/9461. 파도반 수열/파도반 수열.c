#include<stdio.h>

#define MAX 101

long long dp[MAX] = {0, };

int main(){
    int n, num;
    scanf("%d", &n);
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 1;
    for(int i = 4; i < MAX; i++){
        dp[i] = dp[i - 3] + dp[i - 2];
    }
    while(n--){
        scanf("%d", &num);
        printf("%lld\n", dp[num]);
    }
    return 0;
}