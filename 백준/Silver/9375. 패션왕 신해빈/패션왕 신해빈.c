#include<stdio.h>
#include<string.h>

#define MAXCHAR 21

typedef struct{
    char cloth[MAXCHAR], kind[MAXCHAR];
}Wearing;

int main(){
    int n, k;
    Wearing w;
    scanf("%d", &n);
    while(n--){
       int day = 1, kindnum = 0, clothnum, arr[31];
       char list[31][MAXCHAR], cloth[MAXCHAR], cloth_kind[MAXCHAR];
       scanf("%d", &clothnum);
       for(int j = 0; j < clothnum; j++){
           scanf("%s %s", w.cloth, w.kind);
           for(k = 0; k < kindnum; k++) if(strcmp(list[k], w.kind) == 0){
               arr[k]++; break;
           }
           if(k == kindnum){
               strcpy(list[kindnum], w.kind);
               arr[kindnum++] = 1;
           }
       }
       for(int j = 0; j < kindnum; j++) day *= (arr[j] + 1);
       printf("%d\n", day - 1);
  }
    return 0;
}