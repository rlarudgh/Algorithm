#include<stdio.h>

int main(){
    int n, a, b;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int d = 1;
        scanf("%d %d", &a, &b);
        for(int j = 0;  j < a; j++){
            d *= b - j;
            d /= j + 1;
        }
        printf("%d\n", d);
    }
    return 0;
}