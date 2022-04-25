#include<stdio.h>
int main(){
	int n;
	int num1, num2;
	int gcd[1000] = {0, };
	int lcm[1000] = {0, };
	scanf("%d", &n);
	for(int i = 0;i<n;i++){
		scanf("%d %d", &num1, &num2);
		for (int j = 1; j <= num1 && j <= num2; ++j) {
        	if (num1 % j == 0 && num2 % j == 0) gcd[i] = j;
    	}
    lcm[i] = (num1 * num2) / gcd[i];
	}
	for(int i = 0;i<n;i++) printf("%d %d\n", lcm[i], gcd[i]);
	return 0;
}