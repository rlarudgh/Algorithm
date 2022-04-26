#include<stdio.h>
int main() {
	int n;
	int num = 0;
	int min = 1000000, max = -1000000;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		if (num > max) max = num;
		if (num < min) min = num;
	}
	printf("%d %d\n", min, max);
	return 0;
}