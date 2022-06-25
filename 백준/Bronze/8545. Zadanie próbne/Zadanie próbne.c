#include<stdio.h>

#define MAX 3

int main(){
    char str[MAX];
    scanf("%s", str);
    for(int i = MAX - 1; i >= 0; i--) printf("%c", str[i]);
    return 0;
}