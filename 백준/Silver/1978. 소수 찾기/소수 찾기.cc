#include<stdio.h>
int main(){
	int n;
	int num;
	int cnt = 0;
	int j = 0;
	scanf("%d", &n);
	for(int i = 0;i<n;i++){
		scanf("%d", &num);
		for(j = 2;j<num;j++){
			if(num%j == 0) break;
		}
		if(j == num) cnt++;
	}
	printf("%d", cnt);
	return 0;
}