#include<stdio.h>

#define MAX 41

int dp[MAX] = {0, };
int cnt = 1;

int fib(int n){
    if(n == 1 || n == 2){
        return 1;
    } else {
        cnt++;
        return fib(n - 1) + fib(n - 2);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int f = fib(n);
    dp[1] = 1;
    dp[2] = 1;
    printf("%d ", cnt);
    cnt = 0;
    for(int i = 3; i <= n; i++){
        dp[i] = dp[i - 1] + dp[i - 2];
        cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}