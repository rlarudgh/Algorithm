#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int compare(const void* a, const void* b) {
    int A = *(int*)a;
    int B = *(int*)b;

    if(A > B) return 1;
    else if(A < B) return -1;
    else return 0;
}

int main() {
    int n;

    scanf("%d", &n);

    if(n == 0) {
      printf("0\n");
      return 0;
    }
    
    int arr[300001] = {0,};

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    qsort(arr, n, sizeof(int), compare);

    int cut = (int)round(n * 0.15);
    double sum = 0;

    for(int i = cut; i < n - cut; i++) {
        sum += arr[i];
    }

    printf("%d", (int)round(sum / (n - cut * 2)));
    
    return 0;
}