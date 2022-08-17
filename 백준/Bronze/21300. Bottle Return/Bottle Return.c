#include <stdio.h>

#define MAX_SIZE 6
 
int main() { 
    int n, sum = 0;
    for (int i = 0; i < MAX_SIZE; i++) {
        scanf("%d", &n);
        sum += n * 5;
    }
    printf("%d\n", sum);
    return 0;
}