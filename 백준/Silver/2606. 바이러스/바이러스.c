#include<stdio.h>

#define MAX_SIZE 101
#define true 1
#define false 0

int pc[MAX_SIZE][MAX_SIZE] = {0, };
int visit[MAX_SIZE];
int cnt = 0;

void dfs(int n, int a){
    visit[0] = 1;
    for(int i = 0; i < n; i++){
        if(visit[i] == false && pc[a][i] == true){
            visit[i] = true;
            dfs(n, i);
            cnt += 1;
        }
    }
}

int main(){
    int n, m, x, y;
    scanf("%d", &n);
    scanf("%d", &m);
    for(int i = 0; i < m; i++){
        scanf("%d %d", &x, &y);
        pc[--x][--y] = true;
        pc[y][x] = true;
    }
    dfs(n, 0);
    printf("%d\n", cnt);
    return 0;
}
/*
7
6
1 2
2 3
1 5
5 2
5 6
4 7
answer => 4
*/