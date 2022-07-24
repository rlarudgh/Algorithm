#include <stdio.h>

int main() {
	int n, cnt = 0;
	scanf("%d", &n);
	for (int i = 0; i < (n - 1) * 4 + 1; i++) printf("*");
	printf("\n");
	for (int i = 2; i <= 2*n-1; i++) {
		for (int j = 0; j <= cnt; j++) printf("* ");
		if (i % 2 == 1)
			for (int star = 0; star < (n - i + cnt + 1) * 4 + 1; star++) printf("*");
		else if (i % 2 == 0) for (int kuhaku = 0; kuhaku < (n - i + cnt) * 4 + 1; kuhaku++) printf(" ");
		for (int j = 0; j <= cnt; j++) printf(" *");
		if (i % 2 == 1) cnt++;
		printf("\n");
	}
	cnt--;
	for (int i = 2; i <= 2 * n - 2; i++) {
		for (int j = 0; j <= cnt; j++) printf("* ");
		if (i % 2 == 1) for (int k = 0; k < (i - n + cnt + 1) * 4 + 1; k++) printf("*");
		else if (i % 2 == 0) for (int k = 0; k < (i - n + cnt) * 4 + 1; k++) printf(" ");
		for (int j = 0; j <= cnt; j++) printf(" *");
		if (i % 2 == 0) cnt--;
		printf("\n");
		if (i >= 2 * n - 2) {
			for (int j = 0; j < (n - 1) * 4 + 1; j++) printf("*");
			printf("\n");
		}
	}
}