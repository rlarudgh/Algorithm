#include<stdio.h>
int arr[1000000];
int f(int a, int b){
	return a > b ? b : a;
}
int main(){
	int n;
	scanf("%d", &n);
	arr[1] = 0;
	for(int i = 2;i<=n;i++){
		arr[i] = arr[i-1]+1;
		if(i%2==0) arr[i] = f(arr[i], arr[i/2]+1);
		if(i%3==0) arr[i] = f(arr[i], arr[i/3]+1);
	}
	printf("%d\n", arr[n]);
	return 0;
}