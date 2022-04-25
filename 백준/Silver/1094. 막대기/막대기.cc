#include<stdio.h>
int main(){
	int length;
	int stick = 64; 
	int str = 0;
	scanf("%d", &length);
	while(length>0){
		if(length%2==1) str++;
		length/=2;
	}
	printf("%d\n", str);
	return 0;
}