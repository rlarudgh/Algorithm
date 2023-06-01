#include<stdio.h>

#define MAX_SIZE 1001

int main(){
    int n;
    char str[MAX_SIZE];
    
    scanf("%s", str);
    scanf("%d", &n);
    
    printf("%c", str[n - 1]);
    
    return 0;
}