#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i + 1; j++) {
			printf("*");
		}
		for (int j = 2 * n - 1; j > 2 * i+1; j--) {
			printf(" ");
		}
		for (int j = 0; j < i+1; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n - 1; j++) {
			printf("*");
		}
		for (int j = 0; j <= 2 * i+1; j++) {
			printf(" ");
		}
		for (int j = i; j < n - 1; j++) {
			printf("*");
		}
		printf("\n");
	}
    return 0;
}