#include<stdio.h>
int func(int a){
    a = a/100 + ((a/10)%10)*10 + ((a%100)%10)*100;
    return a;
}
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    a = func(a);
    b = func(b);
    if(a<b) printf("%d\n", b);
    else printf("%d\n", a);
    return 0;
}