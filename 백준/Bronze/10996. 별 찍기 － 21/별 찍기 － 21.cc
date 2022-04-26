#include<stdio.h>
int main() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N * 2; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < N; j++) {
				if (j % 2 == 0)
					printf("*");
				if (j % 2 == 1 && j != N - 1)
					printf(" ");
			}
			printf("\n");
		}
		else {
			for (int j = 0; j < N; j++) {
				if (j % 2 == 0 && j != N - 1)
					printf(" ");
				if (j % 2 == 1)
					printf("*");
			}
			printf("\n");
		}
	}
}