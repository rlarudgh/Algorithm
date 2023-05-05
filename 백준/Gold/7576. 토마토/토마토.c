#include<stdio.h>

#define MAX_SIZE 1001
#define true 1
#define false 0
#define max(a, b) a > b ? a : b

typedef struct{
    int x, y;
} Point;

int dx[] = {0, 0, -1, 1}, dy[] = {-1, 1, 0, 0};
Point queue[MAX_SIZE * MAX_SIZE];
int front = 0, rear = 0, result = 1, map[MAX_SIZE][MAX_SIZE];

void push(int x, int y) {
    queue[rear].x = x;
    queue[rear].y = y;
    rear++;
}

void pop() {
    front++;
}

int isEmpty() {
    return front == rear;
}

void bfs(int m, int n) {
    while(!isEmpty()) {
        Point point = queue[front];

        pop();

        for(int i = 0; i < 4; i++) {
            int nx = point.x + dx[i], ny = point.y + dy[i];

            if(nx >= 0 && ny >= 0 && nx < n && ny < m && !map[nx][ny]) {
                map[nx][ny] = map[point.x][point.y] + 1;
                result = max(result, map[nx][ny]);

                push(nx, ny);
            }
        }
    }
}

int findTomato(int m, int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(!map[i][j]) return false;
        }
    }
  
    return true;
}

int main() {
    int m, n;

    scanf("%d %d", &m, &n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &map[i][j]);
            
            if(map[i][j] == 1) {
                push(i, j);
            }
        }
    }

    bfs(m, n);

    printf("%d\n", findTomato(m, n) ? result - 1 : -1);

    return 0;
}
