#include<stdio.h>
#include<string.h>

#define MAX_SIZE 1000001

int main() {
    char s[MAX_SIZE];
    
    scanf("%s", s);
    
    for(int i = 0, len = strlen(s); i < len; i++) {
        s[i] -= 32;
    }
    
    printf("%s", s);
    
    return 0;
}