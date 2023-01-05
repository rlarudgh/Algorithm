#include<stdio.h>

int main() {
    int number = 1;
    while(number != 0){
        int temp = 1, answer = 0;
        scanf("%d", &number);
        for(int i = 0; i < number; i++){
            answer += temp++;
        }
        if(number == 0) break;
        printf("%d\n", answer);
    }
    return 0;
}