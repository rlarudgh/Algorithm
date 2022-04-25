#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	for(int i=n;i>0;i--){
		for(int j=i-1;j>0;j--){
			printf(" ");
		}
		for(int k=0;k<=n-i;k++){
			printf("*");
		}
		printf("\n");
	}
}