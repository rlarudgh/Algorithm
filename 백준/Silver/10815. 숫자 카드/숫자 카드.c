#include<stdio.h>
#include<stdlib.h>

#define true 1
#define false 0

int compare(const void *a, const void *b){
    return *(int *)a < *(int *)b ? -1 : *(int *)a > *(int *)b ? 1 : 0;
}

int binarysearch(int *arr, int num, int n){
    int left = 0, right = n, mid;
    while(left <= right){
        mid = (left + right) / 2;
        if (arr[mid] == num) return true;
        else if (arr[mid] < num) left = mid + 1;
        else right = mid - 1;
    }
    return false;
}

int main(){
    int n, m;
    scanf("%d", &n);
    int *arr = (int *)malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    } 
    scanf("%d", &m);
    int *arr1 = (int *)malloc(sizeof(int) * m);
    for(int i = 0; i < m; i++){
        scanf("%d", &arr1[i]);
    }
    qsort(arr, n, sizeof(int), compare);
    for(int i = 0 ; i < m; i++){
        printf(binarysearch(arr, arr1[i], n) ? "1 " : "0 ");
    }
}