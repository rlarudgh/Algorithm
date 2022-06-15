#include<stdio.h>
#include<math.h>

#define MAX 5

int main() {
	int n, sum = 0, arr[MAX] = { 0 };
	for (int i = 0; i < MAX; i++) {
		scanf("%1d", &arr[i]);
		sum += pow(arr[i], MAX);
	}
	printf("%d", sum);
}