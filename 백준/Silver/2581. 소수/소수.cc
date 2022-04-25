#include<stdio.h>

int main(){
    int m, n, sum = 0, min = 0;
    int check= 0;
    scanf("%d %d", &m, &n);
    for(int i = m;i<=n;i++){
        for(int a = 2;a <= i;a++){
            if(i%a == 0){
                if(a==i){
                    sum += i;
                    check += 1;
                    if(check == 1) min = i;
                    break;
                }
                else break;
            }
        }
    }
    if(sum == 0) printf("%d\n", -1);
    else {
        printf("%d\n", sum);
        printf("%d", min);
    }
    return 0;
}