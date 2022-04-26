#include<stdio.h>
int main() {
	int num = 0;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num-1-i; j++) {
			printf(" ");
		}
		printf("*");
		for (int j = 0; j < 2 * i- 1; j++) {
			if (i == num - 1) {
				printf("*");
			}
			else printf(" ");
		}
		if (i == 0) printf("\n");
		else printf("*\n");

	}

}