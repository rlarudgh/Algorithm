#include<stdio.h>
int main() {
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			printf(" ");
		}
		printf("*");
		for (int j = 0; j < 2 * i - 1; j++) {
			printf(" ");
		}
		if (i != 0) printf("*\n");
		else printf("\n");
	}
}