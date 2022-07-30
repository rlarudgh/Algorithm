#include<stdio.h>
#define MAX_SIZE 31

int main(){
    int dp[MAX_SIZE][MAX_SIZE], r, c, w, result = 0;
    dp[1][1] = 1;
    scanf("%d %d %d", &r, &c, &w);
    for(int i = 1; i < MAX_SIZE; i++) for(int j = 1; j <= i; j++) dp[i][j] = (j == 1 || i == j) ? 1 : (dp[i - 1][j - 1] + dp[i - 1][j]);
    for(int i = 0; i < w; i++) for(int j = 0; j <= i; j++) result += dp[r + i][c + j];
    printf("%d\n", result);
    return 0;
}