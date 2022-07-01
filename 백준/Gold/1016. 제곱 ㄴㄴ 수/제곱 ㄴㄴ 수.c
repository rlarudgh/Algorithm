#include<stdio.h>
#include<math.h>
int arr[1000001], cnt = 0;
int main(){
  long long n,m,s,q;
  scanf("%lld %lld", &n, &m);
  for(int i = 0 ; i <= m-n; i++){
    arr[i] = 1;
  }
  for(long long i = 2; i <= (long long)sqrt(m); i++){
    s = i*i;
    for(long long j = n / s; j <= m; j++){
      q = s*j;
      if(q > m) break;
      if(n <= q && q <= m && arr[q-n]){
        arr[q-n] = 0;
        cnt++;
      }
    }
  }
  printf("%lld\n", m-n-cnt+1);
  return 0;
}