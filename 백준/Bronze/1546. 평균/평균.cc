#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string>
int main() {
	int num, i;
	double arr[1000], max = 0, avg = 0;
	scanf("%d", &num);
	for (i = 0; i < num; i++) {
		scanf("%lf", &arr[i]);

		if (max < arr[i])
			max = arr[i];
	}

	for (i = 0; i < num; i++) {
		arr[i] = arr[i] / max * 100.0;
		avg += arr[i];
	}

	printf("%.2lf\n", (avg / (double)num));
	return 0;
}