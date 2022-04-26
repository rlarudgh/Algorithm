#include<stdio.h>
int main(){
    int arr[10001];
    for(int i = 1;i<=10000;i++){
        int sum = i;
        int n = i;
        while(n>0){
            sum += n%10;
            n/=10;
        }
        if(sum <= 10000) arr[sum] = 1;
    }
    for(int i = 1;i<=10000;i++){
        if(arr[i]!= 1) printf("%d\n", i);
    }
    return 0;
}