#include<stdio.h>

int main(){
    int x1, y1, x2, y2, x3, y3;
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
    printf((x1*y2 - x2*y1 + x2*y3 - x3*y2 + x3*y1 - x1*y3) / 2 > 0 ? "1\n" : (x1*y2 - x2*y1 + x2*y3 - x3*y2 + x3*y1 - x1*y3) / 2 < 0 ? "-1\n" : "0");
    return 0;
}