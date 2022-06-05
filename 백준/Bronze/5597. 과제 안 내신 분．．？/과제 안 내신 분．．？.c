#include<stdio.h>
#include<stdlib.h>
#define MAX 30
int main(){
    int *arr = (int*)malloc(sizeof(int) * MAX), index;
    for(int i = 0; i < MAX -2 ; i++){
        scanf("%d", &index);
        arr[index-1] = index;
    }
    for(int i = 0; i < MAX; i++){
        arr[i] == 0 ? printf("%d\n", i+1) : printf("");
	 }
    return 0;
}