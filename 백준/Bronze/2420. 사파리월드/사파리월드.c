#include<stdio.h>
int main(){
    long long a, b;
    scanf("%lld %lld", &a, &b);
    printf("%lld\n", a < b ? (b-a) : (a-b));
    return 0;
}