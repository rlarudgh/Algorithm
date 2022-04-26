#include<stdio.h>
int main() {
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2 * n; j++) {
			if (i % 2 == 0 || i == 0) {
				if (j % 2 == 0 || j == 0) {
					printf("*");
				}
				else printf(" ");
			}
			else {
				if (j % 2 != 0) {
					printf("*");
				}
				else printf(" ");
			}
		}
		printf("\n");
	}
}