#include<stdio.h>
#include<string.h>

int main(){
  int N;
  int sum = 0;
  int num = 0;
  char str[80];
  scanf("%d", &N);
  for(int i = 0; i< N;i++){
    scanf("%s", str);
    for(int j = 0; j< strlen(str); j++){
      if(str[j] == 'X'){
        num = 0;
      }
      else{
        sum += ++num;
      }
    }
    printf("%d\n", sum);
    sum = 0;
    num = 0;
  }
}