#include<stdio.h>
int main(){
    long long a, sum = 0;
    for(int i = 0; i < 3; i++){
        scanf("%lld", &a);
        sum += a;
    }
    printf("%lld\n", sum);
    return 0;
}