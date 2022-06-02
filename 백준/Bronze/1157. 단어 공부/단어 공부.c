#include <stdio.h>

int main(void) {
  char str[1000001], answer;
  int alp[26], sum = 0, len = 0;
  scanf("%s", str);
  for (int i = 0; str[i] != '\0'; i++) len++;
  for(int i = 0; i < len; i++){
    str[i] >= 'a' ? alp[str[i]- 'a']++ : alp[str[i]-'A']++;
  }
  for(int i = 0; i < 26; i++){
    if(alp[i] == sum){
      answer = '?';
    } else if(alp[i] > sum){
      sum = alp[i];
      answer = 'A' + i;
    }
  }
    printf("%c\n", answer);
  return 0;
}