#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int x[n];
    int y[n];
    for(int i = 0; i < n; i++){
        scanf("%d %d", &x[i], &y[i]);
    }
    for(int i = 0; i < n; i++){
        int k = 1;
        for (int j = 0; j < n; j++) {
            if (x[i] < x[j] && y[i] < y[j]) {
                k++;
            }
        }
        printf("%d ", k);
    }
    return 0;
}