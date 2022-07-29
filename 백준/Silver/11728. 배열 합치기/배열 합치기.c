#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b) { return *(int *)a < *(int *)b ? -1 : *(int *)a > *(int *)b ? 1 : 0; }

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int* arr = (int *)malloc(sizeof(int) * (n + m));
    for(int i = 0; i < n + m; i++) scanf("%d", &arr[i]);
    qsort(arr, n + m, sizeof(int), compare);
    for(int i = 0;  i < n + m; i++){
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}