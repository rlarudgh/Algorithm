#include <stdio.h>

#define MAX_SIZE 1001

int map[MAX_SIZE][MAX_SIZE] = {0,};
int visit[MAX_SIZE] = {0,};

void dfs(int num, int size) {
    visit[num] = 1;

    for (int i = 1; i <= size; i++)
    {
        if (map[num][i] && !visit[i])
        {
            dfs(i, size);
        }
    }
}

int main() {
    int n, m, x, y, cnt = 0;

    scanf("%d %d", &n, &m);

    for (int i = 0; i < m; i++) {
        scanf("%d %d", &x, &y);
        map[x][y] = 1;
        map[y][x] = 1;
    }

    for (int i = 1; i <= n; i++) {
        if (!visit[i]) {
            dfs(i, n);
            cnt++;
        }
    }

    printf("%d\n", cnt);
    return 0;
}