#include<stdio.h>

void print(int a, int b, int n){
    if((a / n) % 3 == 1 && (b / n) % 3 == 1) {
        printf(" ");
    } else {
        if(n / 3 == 0) printf("*");
        else print(a, b, n / 3);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) print(i, j, n);
        printf("\n");
    }
    return 0;
}