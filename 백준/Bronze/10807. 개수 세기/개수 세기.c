#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, find, cnt = 0, sum = 0;
    scanf("%d", &n);
    int *arr = (int*)malloc(sizeof(int) * n);
    
    for(int i = 0 ;i < n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &find);
    for(int i = 0; i < n; i++){
        arr[i] == find ? cnt++ : sum++;
    }
    printf("%d\n", cnt);
    return 0;
}