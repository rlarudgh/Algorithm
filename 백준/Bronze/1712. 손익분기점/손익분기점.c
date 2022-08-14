#include <stdio.h>

typedef long long ll;

int main() {
    ll a = 0, b = 0, c = 0, x = 1;
    scanf("%lld %lld %lld", &a, &b, &c);
    printf("%d\n", b >= c ? -1 : a/(c-b) + 1);
    return 0;
}