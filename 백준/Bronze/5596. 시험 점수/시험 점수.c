#include<stdio.h>

#define true 1
#define false 0

int main(){
    int a, b, c, d, sum = 0;
    for(int i = 0; i < 2; i++){
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if(a + b+ c + d > sum) sum = a+b+c+d;
    }
    printf("%d\n", sum);
    return 0;
}