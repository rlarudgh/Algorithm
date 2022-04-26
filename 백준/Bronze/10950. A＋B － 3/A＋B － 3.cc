#include<stdio.h>
int main(){
    int size, a, b;
    scanf("%d", &size);
    for(int i = 0;i<size;i++){
        scanf("%d %d", &a, &b);
        printf("%d\n", a+b);
    }
    return 0;
}