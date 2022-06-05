#include<stdio.h>
int a[100][100], b[100][100];

void input(int n, int m, int division){
    if(division == 0){
        for(int i = 0; i < n; i++) {
		    for(int j = 0; j < m; j++) scanf("%d", &a[i][j]);
	    }
        return;
    } else if(division ==1){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++) scanf("%d", &b[i][j]);
        }
        return;
    }
    return;
}

int main(){
    int c, d;
    scanf("%d %d", &c, &d);
    for(int i = 0; i < 2; i++){
        input(c, d, i);
    }
    for(int i = 0; i < c; i++){
        for(int j = 0; j < d; j++){
            a[i][j] += b[i][j];
			printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}