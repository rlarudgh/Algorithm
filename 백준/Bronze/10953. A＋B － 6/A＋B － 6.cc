#include<stdio.h>

int main(){
    int n;
    int num1, num2;
    scanf("%d", &n);
    for(int i = 0;i<n;i++){
        scanf("%d,%d", &num1, &num2);
        printf("%d\n", num1 + num2);
    }
    return 0;
}