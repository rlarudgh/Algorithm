#include<stdio.h>

int main(){
    int n, k, ptr1 = 1, ptr2 = 1, ptr3 = 1;
    scanf("%d %d", &n, &k);
    for(int i = n;i>0;i--){
        ptr1 *= i;
    }
    for(int i = k;i>0;i--){
        ptr2 *= i;
    }
    for(int i = n-k;i>0;i--){
        ptr3 *= i;
    }
    printf("%d\n", ptr1/(ptr2*ptr3));
    return 0;
}