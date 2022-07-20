#include<stdio.h>
#include<math.h>

#define SQR(x)(x*x)

int main(){
    int n;
    long long a, b, d;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        long long dis;
        scanf("%lld %lld", &a, &b);
        d = (int)sqrt(b - a);
        dis = b - a;
        if(dis == SQR(d)) printf("%lld\n", d * 2 - 1);
        else if(SQR(d) < dis && dis <= SQR(d) + d){
            printf("%lld\n", d * 2);
        } else if(SQR(d) + d < dis && dis <= SQR((d + 1))){
            printf("%lld\n", d * 2 + 1);
        }
    }
    return 0;
}