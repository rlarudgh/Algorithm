#include<stdio.h>
#include<stdlib.h>

int compare(const void* a, const void* b) {
    int A = *(int*)a;
    int B = *(int*)b;

    if (A > B) return 1;
    else if (A < B) return -1;
    return 0;
}

int main() {
    int n, c, left = 1, right, result = 0;
    
    scanf("%d %d", &n, &c);

    int *arr = (int*)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    qsort(arr, n, sizeof(arr[0]), compare);

    right = arr[n - 1] - arr[0];

    while (left <= right) {
        int mid = (left + right) / 2, cnt = 1, prev = arr[0];

        for (int i = 1; i < n; i++) {
            if (arr[i] - prev >= mid) {
                cnt++;
                prev = arr[i];
            }
        }

        if (cnt >= c) {
            result = mid;
            left = mid + 1;
            continue;
        }
            right = mid - 1;
    }

    printf("%d\n", result);

    free(arr);

    return 0;
}
