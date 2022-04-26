#include<stdio.h>
int main(){
	long a, b;
	scanf("%ld %ld", &a, &b);
	long n = (a+b)*(a-b);
	printf("%ld", n);
	return 0;
}