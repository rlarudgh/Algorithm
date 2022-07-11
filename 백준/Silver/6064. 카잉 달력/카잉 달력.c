#include<stdio.h>

#define SQR(x, y)((x)*(y))

int main(){
    int n, M, N, x, y;
    scanf("%d", &n);
    for(int i  = 0; i < n; i++){
        scanf("%d %d %d %d", &M, &N, &x, &y);
        int answer = x;
        y %= N;
        while(answer <= SQR(M, N) && answer % N != y){
            answer += M;
        }
        printf("%d\n", answer > SQR(M, N) ? -1 : answer);
    }
    return 0;
}