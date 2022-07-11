#include<stdio.h>

#define MAX 100001

int main(){
    int n, m, arr[MAX] = {0, }, a, b;
    long long sum[MAX] = {0, }, answer = 0;
    scanf("%d %d", &n, &m);
    for(int i = 1; i <= n; i++){
        scanf("%d", &arr[i]);
        sum[i] = sum[i-1] + arr[i];
    }
    for(int i = 0; i < m; i++){
        scanf("%d %d", &a, &b);
        answer = sum[b] - sum[a - 1];
        printf("%d\n", answer);
    }
    return 0;
}