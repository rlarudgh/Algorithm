#include<stdio.h>
#include<stdlib.h>

typedef struct{
  int x, y;
}Coordinate;

int compare(const void *a, const void *b){
    Coordinate c1 = *(Coordinate*)a, c2 = *(Coordinate*)b;
    if (c1.x < c2.x) return -1;
    else if (c1.x > c2.x) return 1;
    else {
        if (c1.y < c2.y) return -1;
        else if (c1.y > c2.y) return 1;
        return 0;
    }
}

int main(){
  int n;
  scanf("%d", &n);
  Coordinate c[n];
  for(int i = 0; i < n; i++){
    scanf("%d %d", &c[i].x, &c[i].y);
  }
  qsort(c, n, sizeof(Coordinate), compare);
  for (int i = 0; i < n; i++){
    printf("%d %d\n", c[i].x, c[i].y);
  }
  return 0;
}