#include<stdio.h>

#define max(a, b) (a > b ? a : b)

int main(){
    int n, arr[301] = {0, }, dp[301] = {0, };
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        scanf("%d", &arr[i]);
    }
    dp[1] = arr[1];
    dp[2] = arr[2] + dp[1];
    for(int i = 3; i <=n; i++){
        dp[i] = max((arr[i] + dp[i -2]), (arr[i-3]+ arr[i-1] + arr[i]));
        dp[i] = max(dp[i-2], arr[i-1] + dp[i-3]) + arr[i]; 
    }
    printf("%d\n", dp[n]);
    return 0;
}
// 그 전에 있는 데이터를 저장을 함으로써 연산 시간을 줄여준다.
/*
    계단을 1칸, 2칸을 이동
    계단 1칸을 연속 3번 사용 불가(최대 2번)
    마지막 계단 무조건 도착

    최댓값을 찾아주고 이것을 dp배열에 저장을 시킨다.
    다음을 계산할 때 그전의 dp 배열을 사용을 한다. 
*/