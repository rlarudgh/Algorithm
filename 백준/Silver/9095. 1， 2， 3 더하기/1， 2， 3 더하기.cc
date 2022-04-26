#include<stdio.h>

void check(int a){
    int arr[12] = {0, };
    arr[0] = 1;
    arr[1] = arr[0];
    arr[2] = 2;
    arr[3] = arr[2] +2;
    if(a < 4){
        printf("%d\n", arr[a]);
        return;
    }
    else if(a >= 4){
        for(int i = 4;i<12;i++){
            arr[i] += arr[i-1];
            arr[i] += arr[i-2];
            arr[i] += arr[i-3];
        }
        printf("%d\n", arr[a]);
    }
    return;
}

int main(){
    int t;
    scanf("%d", &t);
    int n;
    for (int  i = 0; i < t; i++) {
        scanf("%d", &n);
        check(n); // 함수로 보내기
    }
    return 0;
}

