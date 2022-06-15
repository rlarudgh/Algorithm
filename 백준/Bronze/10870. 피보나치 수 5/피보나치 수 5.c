#include<stdio.h>

int fibo(int num) {
    if(num == 0)
        return 0;
    if(num == 1)
        return 1;
    return fibo(num-2) + fibo(num-1);
}

int main() {
    int num;
    scanf("%d",&num);
    printf("%d",fibo(num));
}