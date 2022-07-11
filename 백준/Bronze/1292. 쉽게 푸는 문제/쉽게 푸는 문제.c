#include<stdio.h>

#define MAX 1000

int arr[MAX] = {0, }, cnt = 0;

void make(){
    for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < i; j++){
			if (cnt == MAX) break;
			arr[cnt] = i;
			cnt++;
		}
	}
}

int main() {
	int a, b, result = 0;
	scanf("%d %d", &a, &b);
    make();
	for (int i = a - 1; i < b; i++) result += arr[i];
	printf("%d\n", result);
    return 0;
}