#include<stdio.h>
int main() {
	int h, m;
	int a;
	scanf("%d %d", &h, &m);
	if (h == 0) {
		if (m < 45) {
			h = 24;
			h--;
			m = m + 60 - 45;
			printf("%d %d\n", h, m);
		}
		else if (m >= 45) {
			m -= 45;
			printf("%d %d\n", h, m);
		}
	}
	else if (h > 0) {
		if (m < 45) {
			h -= 1;
			m = m + 60 - 45;
			printf("%d %d", h, m);
		}
		else if (m >= 45) {
			m = m - 45;
			printf("%d %d", h, m);
		}
	}
}