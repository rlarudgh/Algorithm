#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d", &n);
    for (int i = -n+1; i < n; i++){
        for (int j = -2*n+2; j < n + abs(i); j++)
            if (abs(j) >= n-1 && abs(i) == n-1) putchar('*');
            else putchar((abs(j)-abs(i) == n-1) || (abs(i)==abs(j)) ? '*' : 32);
        putchar(10);
    }
}