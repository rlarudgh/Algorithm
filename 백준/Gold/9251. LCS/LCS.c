#include<stdio.h>
#include<string.h>

#define MAX 1001
#define maxfind(a, b)(a > b ? a : b)

int dp[MAX][MAX];

int main(){
    char str1[MAX], str2[MAX];
    scanf("%s", str1);
    scanf("%s", str2);
    int a = strlen(str1), b = strlen(str2);
    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= b; j++){
            dp[i][j] = str1[i - 1] == str2[j - 1] ? dp[i - 1][j - 1] + 1 : maxfind(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    printf("%d\n", dp[a][b]);
    return 0;
}