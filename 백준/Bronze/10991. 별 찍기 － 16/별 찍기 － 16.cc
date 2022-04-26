#include<stdio.h>
int main() {
	int num = 0;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num - i - 1;j++) {
			printf(" ");
		}
		printf("*");
		for (int j = 0; j <= 2*i-1; j++) {
			if (j % 2 == 0) {
				printf(" ");
			}
			else printf("*");
		}
		printf("\n");
	}
}