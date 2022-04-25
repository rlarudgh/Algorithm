#include<stdio.h>
int main(){
    int num[10] = {0, };
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    int s = A*B*C;
    int n;
    while(s >0){
        n = s%10;
        num[n]++;
        s /= 10;
    }
    for(int i = 0;i<10;i++){
        printf("%d\n", num[i]);
    }
    return 0;
}