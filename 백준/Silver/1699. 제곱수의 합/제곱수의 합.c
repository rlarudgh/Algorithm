#include<stdio.h>

#define MAX_SIZE 100001
#define min(a, b)(a > b ? b : a)

int pow(int n, int m){
    int result = n;
    for(int i = 0; i < (m - 1); i++){
        result *= n;
    }
    return result;
}

int main(){
    int n, dp[MAX_SIZE] = {0, }, temp;
    scanf("%d", &n);
    dp[1] = 1;
	dp[2] = 2;
    for(int i = 3; i <= n; i++){
        dp[i] = dp[i - 1] + 1;
        temp = 2;
        while(pow(temp, 2) <= i){
            dp[i] = min(dp[i], 1 + dp[i - pow(temp, 2)]);
            temp += 1;
        }
    }
    printf("%d\n", dp[n]);
    return 0;
}