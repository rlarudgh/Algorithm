#include<stdio.h>

int check(int num, int count){
    int arr[1000] = {0, };
    int i = 2;
    while(i <= num){
        arr[i] = i;
        i++;
    }
    int sum = 0;
    for(int j = 2;j<=num;j++){
        if(arr[j] != 0){
            for(int k = j;k <=num; k+=j){
                if(arr[k]== 0) continue;
                else {
                    arr[k] = 0;
                    sum++;
                }
                if(sum == count){
                    return k;
                    break;
                }
            }
        }
    }
}

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d", check(n, k));
}