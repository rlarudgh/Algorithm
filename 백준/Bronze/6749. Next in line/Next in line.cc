#include<stdio.h>
int main(){
    int a, b, str = 0;
    scanf("%d %d", &a, &b);
    for(int i = a;i < b;i++){
        str++;
    }
    printf("%d\n", b+str);
    return 0;
}