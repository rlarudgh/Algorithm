#include<stdio.h>

#define true 1
#define false 0

int main(){
    int x, y;
    while(true){
        scanf("%d %d", &x, &y);
        if(x == 0 && y == 0) break;
        x > y ? printf("Yes\n") : printf("No\n");
    }
}