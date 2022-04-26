#include<stdio.h>

int square(int n){
    return n*n;
}

int main(){
    int a, b, c;
    while(1){
        scanf("%d %d %d", &a, &b, &c);
        if(a == 0 && b == 0 && c == 0) break;
        a = square(a);
        b = square(b);
        c = square(c);
        if(a + b == c || b + c == a || c + a == b) printf("right\n");
        else printf("wrong\n");
    }
    return 0;
}