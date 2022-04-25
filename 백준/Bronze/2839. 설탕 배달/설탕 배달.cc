#include<stdio.h>
int main(){
    int n, sum = 0;
    scanf("%d", &n);
    for( ; n > 0; ){
        if(n%5==0){
            n -= 5;
            sum++;
        }
        else if(n%3==0){
            n -= 3;
            sum++;
        }
        else if(n > 5){
            n -= 5;
            sum++;
        }
        else {
            sum = -1;
            break;
        }
    }
    printf("%d\n", sum);
    return 0;
}