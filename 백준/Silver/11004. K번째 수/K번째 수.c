#include<stdio.h>
#include<stdlib.h>

int compare(const void* a, const void* b){ return *(int * )a < *(int *)b ? -1 : *(int *)a > *(int *)b ? 1 : 0; }

int main(){
    int n, k, i = 0;
    scanf("%d %d", &n, &k);
    int *arr = (int *)malloc(sizeof(int) * n);
    int size = n;
    while(n--){
        scanf("%d", &arr[i++]);
    }
    qsort(arr, size, sizeof(int), compare);
    printf("%d\n", arr[k - 1]);
    free(arr);
    return 0;
}