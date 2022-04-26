#include<stdio.h>

int main(){
    int price, num, money;
    scanf("%d %d %d", &price, &num, &money);
    int sum = 0;
    for(int i = 0;i<num;i++){
        sum += price;
    }
    if(sum > money) printf("%d\n", sum - money);
    else printf("0\n");
    return 0;
}