#include<stdio.h>
#define MAX 10000
int main(){
	int n, x;
	int num, size = 0;
	int arr[MAX] = {0, };
	scanf("%d %d", &n, &x);
	for(int i = 0; i < n; i++){
		scanf("%d", &num);
		if(num < x) {
			arr[size] = num;
			size++;
		}
	}
	for(int i = 0;i<size;i++){
		printf("%d ", arr[i]);
	}
	return 0;
}