#include<stdio.h>

int main(){
    int n;
    long long a, b;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%lld %lld", &a, &b);
        printf("%lld\n", a + b);
    }
    return 0;
}