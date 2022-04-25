#include<stdio.h>
int main(){
  int N;
  int q;
  char a[21];
  scanf("%d", &N);
  for(int i = 0;i < N;i++){
    scanf("%d %s", &q, a);
    for(int j = 0; a[j] != '\0'; j++){
      for(int k = 0; k < q ;k++) printf("%c", a[j]);
    }
    printf("\n");
  }
  return 0;
}