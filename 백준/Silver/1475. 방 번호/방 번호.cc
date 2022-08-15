#include<stdio.h>

#define MAX_SIZE 10
#define true 1
#define false 0

int main(){
    int n, arr[MAX_SIZE] = { 0, };
    scanf("%d", &n);
    while (n != 0) {
        arr[n % 10] += true;
        n /= 10;
    }
    int temp = (arr[6] + arr[9] + 1) / 2;
    for (int i = 0; i < MAX_SIZE; i++) {
        if (i != 6 && i != 9 && arr[i] >= temp) temp = arr[i];
    }
    printf("%d\n", temp == 0 ? 1 : temp);
    return 0;
}