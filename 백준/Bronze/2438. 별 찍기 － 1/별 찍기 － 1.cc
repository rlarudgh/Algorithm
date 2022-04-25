#include<stdio.h>
int main() {
	int i, j, n;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = n; j >= n-i; j--) {
			printf("*");
		}
		printf("\n");
	}
}