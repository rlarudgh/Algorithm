#include<stdio.h>

typedef long long ll;

#define MAX_SIZE 5
#define true 1
#define false 0

int n;
ll b, result[MAX_SIZE][MAX_SIZE], arr[MAX_SIZE][MAX_SIZE];

void solve(ll x[MAX_SIZE][MAX_SIZE], ll y[MAX_SIZE][MAX_SIZE]){
    ll temp[MAX_SIZE][MAX_SIZE];
    for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			temp[i][j] = false;
			for(int k = 0; k < n; k++){
				temp[i][j]+= x[i][k] * y[k][j];
			}
			temp[i][j]%=1000;
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			x[i][j]=temp[i][j];
		}
	}
}

int main(){
    scanf("%d %lld", &n, &b);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%lld", &arr[i][j]);
        }
        result[i][i] = true;
    }
    while(b){
        if (b % 2) {
			solve(result, arr);
		}
		solve(arr, arr);
        b /= 2;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%lld ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}