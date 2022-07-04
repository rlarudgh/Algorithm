#pragma warning(disable:4996)
#pragma warning(disable:6013)
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> // strcmp


int main(){
  int n;
  int bit = bit & (1 << 20);
  char str[7];
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    int data;
    scanf("%s", str);
    if(!strcmp(str, "add")){
      scanf("%d", &data);
      int n = data - 1;
      bit = bit | (1 << n);
    } else if(!strcmp(str, "remove")){
      scanf("%d", &data);
      int n = data - 1;
      bit = bit & ~(1 << n);
    } else if(!strcmp(str, "check")){
      scanf("%d", &data);
      int n = data - 1;
      printf("%d\n", (bit >> n) & 1);
    } else if(!strcmp(str, "toggle")){
      scanf("%d", &data);
      int n = data - 1;
      bit = bit ^ (1 << n);
    } else if(!strcmp(str, "all")){
      bit = bit |~ (1 << 20);
    } else if(!strcmp(str, "empty")){
      bit = bit & (1 << 20);
    } else continue;
  }
}
/*
add x: S에 x를 추가한다. (1 ≤ x ≤ 20) S에 x가 이미 있는 경우에는 연산을 무시한다.
remove x: S에서 x를 제거한다. (1 ≤ x ≤ 20) S에 x가 없는 경우에는 연산을 무시한다.
check x: S에 x가 있으면 1을, 없으면 0을 출력한다. (1 ≤ x ≤ 20)
toggle x: S에 x가 있으면 x를 제거하고, 없으면 x를 추가한다. (1 ≤ x ≤ 20)
all: S를 {1, 2, ..., 20} 으로 바꾼다.
empty: S를 공집합으로 바꾼다. 
*/