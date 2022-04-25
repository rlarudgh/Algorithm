#include<stdio.h>

int main(){
    int num, count = 0;
    int sum = 0, min = 100;
    for(int i = 0;i<7;i++){
        scanf("%d", &num);
        if(num%2==1){
            sum += num;
            if(min > num){
                min = num;
            }
        }
        else count++;
    }
    if(sum == 0) printf("-1\n");
    else printf("%d\n%d", sum, min);
    return 0;
}