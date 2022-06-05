#include<stdio.h>
#include<string.h>

int main(){
	char front, last;
	int n, length;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
        char str[1000] = "\0";
		scanf("%s", str);
		length = strlen(str);
		front = str[0];
		last = str[length - 1];
		printf("%c%c\n", front, last);
	}
    return 0;
}