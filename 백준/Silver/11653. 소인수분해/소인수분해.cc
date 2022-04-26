#include<stdio.h>

int main(){
    int num;
    scanf("%d", &num);
   for(int i = 2;i<=num;i++){
       while(num % i == 0){
           printf("%d\n", i);
           num /= i;
       }
   }
    return 0;
}