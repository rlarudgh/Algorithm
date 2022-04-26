#include<stdio.h>

int main(){
    int num;
    int sum = 0, avg;
    for(int i = 0;i<5;i++){
        scanf("%d", &num);
        if(num >=40) sum += num;
        else sum += 40;
    }
    avg = sum / 5;
    printf("%d", avg);
    return 0;
}