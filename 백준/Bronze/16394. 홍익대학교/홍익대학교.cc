#include<stdio.h>
int main(){
    int year = 1946;
    int n;
    int str = 0;
    scanf("%d", &n);
    while(year<n){
        str++;
        year++;
    }
    printf("%d", str);
    return 0;
}