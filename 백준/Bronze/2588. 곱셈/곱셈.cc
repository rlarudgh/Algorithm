#include<stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", a * (b%10));
    printf("%d\n", a* (b/10%10));
    printf("%d\n", a * (b/(10*10)));
    printf("%d\n", a * (b/(10*10))*100 + a* (b/10%10)*10+ a * (b%10));
    return 0;
}