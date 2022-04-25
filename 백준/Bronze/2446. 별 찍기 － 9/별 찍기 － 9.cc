#include<stdio.h>
int main() {
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < n-1; i++) {
		for (int j = n; j > n-i; j--) {
			printf(" ");
		}
		for (int k = 2*i; k < 2 * n -1; k++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			printf(" ");
		}
		for (int j = 0; j <= 2 * i; j++) {
			printf("*");
		}
		printf("\n");
	}
}