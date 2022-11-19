#include<stdio.h>

#define MAX_SIZE 31

int main(){
    int dp[MAX_SIZE][MAX_SIZE] = {0, };
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i = 0 ; i < MAX_SIZE; i++) dp[i][0] = 1;
    for(int i = 1; i < MAX_SIZE; i++) for(int j = 1; j <= i; j++) dp[i][j] = dp[i - 1][j - 1] +dp[i - 1][j];
    printf("%d\n", dp[n - 1][m - 1]);
    return 0;
}