#include<stdio.h>

typedef long long ll;

#define true 1
#define false 0;

int main(){
    ll a = 0, s, cnt = 0, i = 1;
    scanf("%lld", &s);
    while(true){
        a += i++;
        cnt += 1;
        if(a > s){
            cnt--;
            break;
        }
    }
    printf("%lld", cnt);
    return 0;
}