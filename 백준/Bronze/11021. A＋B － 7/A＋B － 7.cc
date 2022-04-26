#include<stdio.h>

int main(){
    int a, b, size;
    scanf("%d", &size);
    for(int i = 0;i<size;i++){
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d\n", i+1, a+b);
    }
    return 0;
}