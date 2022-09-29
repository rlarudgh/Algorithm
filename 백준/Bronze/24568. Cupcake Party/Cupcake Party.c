#include <stdio.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%d\n", (n * 8 + m * 3) - 28 < 0 ? 0 : (n * 8 + m * 3) - 28);
    return 0;
}