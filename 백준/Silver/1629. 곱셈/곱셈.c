#include<stdio.h>

#define SQR(x)(x*x)

long long  result(int a, int b, int c){
    if(b > 1){
        long long answer = result(a, b / 2, c);
        return b % 2 ? SQR(answer) % c * a % c : SQR(answer) % c;
    } else return a % c;
}

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%lld\n", result(a, b, c));
    return 0;
}