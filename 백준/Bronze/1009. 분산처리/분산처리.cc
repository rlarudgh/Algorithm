// 1009 분산처리

#include<stdio.h>
#include<math.h>

int main(){
    int T;
    long long answer = 1, a, b;
    scanf("%d", &T);
    for(int i = 0; i < T; i++){
        scanf("%lld %lld", &a, &b);
        for(long long j =0; j < b; j++){
            answer *= a;
            answer =  answer % 10;
        }
        printf("%lld\n", answer == 0 ? 10 : answer);
      answer = 1;
    }
    return 0;
}
