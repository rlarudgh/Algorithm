#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
  char str[51];
  int n;
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    int cnt = 0;
    scanf("%s", str);
    for(int j = 0; j < strlen(str); j++){
      if(cnt < 0){
        break;
      }
      str[j] == '(' ? cnt++ : cnt--;
    }
    printf(cnt == 0 ? "YES\n" : "NO\n");
  }
  return 0;
}