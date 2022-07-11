#include<stdio.h>
#include<string.h>

#define MAX 101

int main(){
    char str[MAX];
    scanf("%s", str);
    int sum = strlen(str);
    for(int i = 0; i < strlen(str); i++){
        if((str[i] == 'l' || str[i] == 'n') && str[i+1] == 'j') sum--;
        if(str[i] == 'd' && str[i+1] == 'z' && str[i+2] == '=') sum--;
    	if(str[i] == '=' || str[i] == '-') sum--;
    }
    printf("%d\n", sum);
    return 0;
}