#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define NOTMAX 1000001
#define KNOWMAX 500001

typedef struct{ char names[21]; }Not;

typedef struct{ char name[21]; }Know;

Not a[NOTMAX];
Know k[KNOWMAX];

int compare(const void* a, const void* b){ return strcmp((char*)a, (char*)b); }

int main(){
  int n, m, count = 0;
  scanf("%d %d", &n, &m);
  for(int i = 0; i < n + m; i++){
    scanf("%s", a[i].names);
  }
  qsort(a, n+m, sizeof(a[0]), compare);
  for(int i = 0; i < n+m; i++){
    if(!strcmp(a[i].names, a[i+1].names)) strcpy(k[count++].name, a[i++].names);
  }
  printf("%d\n", count);
  for(int i = 0; i < count; i++){
    printf("%s\n", k[i].name);
  }
  return 0;
}