#include<stdio.h>
#include<string.h>

#define MAXLEN 51

int main(){
    int sum = 0, temp = 0, arr[MAXLEN / 2], tmp = 0, answer;
    char str[MAXLEN];
    scanf("%s", str);
    for(int i = 0 ; i <= strlen(str); i++){
        if(str[i] == '-' || i == strlen(str)){
            sum += temp;
            arr[tmp++] = sum;
            temp = sum = 0;
        } else if(str[i] == '+'){
            sum += temp;
            temp = 0;
        } else{
            temp *= 10;
            temp += str[i] - '0';
        }
    }
    answer = arr[0];
    for(int i = 1; i < tmp; i++) answer -= arr[i];
    printf("%d\n", answer); 
    return 0;
}