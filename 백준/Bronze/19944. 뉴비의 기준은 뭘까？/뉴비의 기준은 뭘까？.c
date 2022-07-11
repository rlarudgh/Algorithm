#include<stdio.h>
int main(){ int a, b; scanf("%d %d", &a, &b); printf(a >= b ? b == 1 || b == 2 ? "NEWBIE!\n" : "OLDBIE!\n" : "TLE!\n"); }