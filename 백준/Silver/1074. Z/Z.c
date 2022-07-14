#include<stdio.h>
#include<math.h>

#define SQR(x)(x*x)

int func(int n, int r, int c){
    if(n < 1) return 0;
    int a = (int)pow(2, n - 1);  //    1사분면                                    2사분면                                           3사분면                             4사분면
    return r < a && c < a ? func(n-1, r, c) : r < a && c >= a ? SQR(a) + func(n-1, r, c-a) : r >= a && c < a ? SQR(a) * 2 + func(n-1, r-a, c) : SQR(a) * 3 + func(n - 1, r - a, c - a);
}

int main(){
    int n, r, c;
    scanf("%d %d %d", &n, &r, &c);
    printf("%d\n", func(n, r, c));
    return 0;
}