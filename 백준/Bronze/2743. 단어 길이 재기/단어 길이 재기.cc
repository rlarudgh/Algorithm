#include<stdio.h>
int main(){
	int cnt = 0;
	char str[100] = {'0', };
	scanf("%s", str);
	for(int i = 0;i<100;i++){
		if(str[i] == NULL) break;
		else cnt++;
	}
	printf("%d", cnt);
}