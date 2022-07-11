#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define P1(x)(x+1)
#define M1(x)(x-1)

typedef struct{
    int number;
    char name[21];
}Pocketmon;

int compare(const void* a, const void* b){
    Pocketmon* c = (Pocketmon *)a;
    Pocketmon* d = (Pocketmon *)b;
    return strcmp(c->name, d->name) > 0 ? 1 : -1;
}

int main(){
    int n, m, left, right, mid;
    char str[21];
    scanf("%d %d", &n, &m);
    Pocketmon *pocketmon = (Pocketmon *)malloc(sizeof(Pocketmon) * n); // 입력 배열
    Pocketmon *sorted = (Pocketmon *)malloc(sizeof(Pocketmon) * n); // 정렬 배열
    for(int i = 0; i < n; i++){
        scanf("%s", pocketmon[i].name);
        pocketmon[i].number = P1(i);
        sorted[i].number = P1(i);
        sorted[i] = pocketmon[i]; 
    }
    qsort(sorted, n, sizeof(sorted[0]), compare);
    for(int i = 0 ; i < m; i++){
        scanf(" %s", str);
        if(str[0] >= '0' && str[0] <= '9') {
            printf("%s\n", pocketmon[M1(atoi(str))].name);
        } else {
            left = 0, right = n - 1;
            while(left <= right){
                mid = (left + right) / 2;
                if(strcmp(sorted[mid].name, str) == 0){
                    printf("%d\n", sorted[mid].number);
                    break;
                } else if(strcmp(sorted[mid].name, str) > 0) right = M1(mid);
                else left = P1(mid);
            }
        }
    }
    free(pocketmon);
    free(sorted);
    return 0;
}