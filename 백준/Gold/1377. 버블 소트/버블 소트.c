#include<stdio.h>
#include<stdlib.h>

#define max(a, b)(a > b ? a : b)

typedef struct{
    int key, value;
} Node;

int compare(const void* a, const void* b) {
    return ((Node*)a)->value - ((Node*)b)->value;
}

int maxValue(Node *point, int n) {
    int result = 0;

    for(int i = 0; i < n; i++) {
        result = max(result, point[i].key - i);
    }

    return result;
}

int main(){ 
    int n;
    
    scanf("%d", &n);

    Node *arr = (Node *)malloc(sizeof(Node) * n);

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i].value);
        arr[i].key = i;
    }

    qsort(arr, n, sizeof(Node), compare);

    printf("%d\n", maxValue(arr, n) + 1);

    return 0;
}