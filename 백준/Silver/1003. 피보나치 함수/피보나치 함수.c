#include<stdio.h>

#define MAX 41

int dp[MAX] = {0, };

int fibo(int n){
    if(n <= 0) return 0;
    else if(n == 1) return dp[n] = 1;

    if(dp[n] != 0) return dp[n];
    else return dp[n] = fibo(n-1) + fibo(n-2);
}

void func(int num){
    fibo(num);
    printf("%d %d\n", dp[num-1], dp[num]);
}

int main(){
    int n, num;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &num);
        if(num == 0) printf("1 0\n");
        else if(num == 1) printf("0 1\n");
        else func(num);
    }
    return 0;
}