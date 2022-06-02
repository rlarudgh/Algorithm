#include<stdio.h>
#include<stdlib.h>

typedef struct{
  int age;
  char name[101];
}Member;

int compare(Member* front, Member* back){
  return (front->age > back->age ? 1 : (front->age < back->age ? -1: 0));
}

int main(){
  int n;
  scanf("%d", &n);
  Member* arr = (Member*)malloc(n * sizeof(Member));
  for(int i = 0; i < n; i++) scanf("%d %s", &arr[i].age, arr[i].name);
  qsort(arr, n, sizeof(Member), compare);
  for(int i = 0; i < n; i++){
    printf("%d %s", arr[i].age, arr[i].name);
    printf("\n");
  }
  return 0;
}