#include<stdio.h>

#define MAX 100

int main(){
    int n, m, k, h1[MAX][MAX], h2[MAX][MAX], result[MAX][MAX];
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &h1[i][j]);
        }
    }
    scanf("%d %d", &m, &k);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < k; j++) {
            scanf("%d", &h2[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            for (int k = 0; k < m; k++) {
                result[i][j] += h1[i][k] * h2[k][j];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}