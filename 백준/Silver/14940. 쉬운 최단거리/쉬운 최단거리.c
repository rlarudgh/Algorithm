// baekjoon 14940 쉬운 최단거리
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 1001
#define true 1
#define false 0
const int FINISH = 2;
const int CAN_GO = 1;
const int BLOCKED = 0;

typedef struct position {
    int x, y;
}Position;

typedef struct Node {
    Position data;
    struct Node* link;
}Node;

typedef struct {
    Node *front, *rear;
    int count;
}Queue;

int map[MAX_SIZE][MAX_SIZE], dist[MAX_SIZE][MAX_SIZE];

void initQueue(Queue *queue) {
    queue->front = queue->rear = NULL;
    queue->count = 0;
}

int isEmpty(Queue *queue) { 
    return queue->count == 0; 
}

void enQueue(Queue *queue, Position data) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->link = NULL;

    if(isEmpty(queue)) {
        queue->front = newNode;
    } else {
        queue->rear->link = newNode;
    }
    
    queue->rear = newNode;
    queue->count += 1;
}

Position deQueue(Queue *queue) {
    if(isEmpty(queue)) {
        return (Position){-10000, 10000};
    }

    Node *ptr = queue->front;
    Position data = ptr->data;

    queue->front = ptr->link;
    
    free(ptr);
    
    queue->count -= 1;

    return data;
}

void printMap(int n, int m) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d ",dist[i][j]);
        }
        printf("\n");
    }
}

void bfs(Position pos, int n, int m) {
    int visited [MAX_SIZE][MAX_SIZE] = {false};
    int dx[4] = { -1, 1, 0, 0 }, dy[4] = { 0, 0, -1, 1 };
    Queue queue;

    initQueue(&queue);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            dist[i][j] = BLOCKED;
        }
    }

    enQueue(&queue, pos);
    dist[pos.x][pos.y] = false;
    visited[pos.x][pos.y] = true;
    
    while(!isEmpty(&queue)) {
        Position front = deQueue(&queue);
        
        if(front.x == -10000 && front.y == 10000) {
            break;
        }

        for(int i = 0; i < 4; i++) {
            int x = front.x + dx[i];
            int y = front.y + dy[i];

            if (x < 0 || x >= n || y < 0 || y >= m) continue;
			if (map[x][y] == BLOCKED || visited[x][y] != false) continue;

            enQueue(&queue, (Position){x, y});

            visited[x][y] = true;
            dist[x][y] = dist[front.x][front.y] + 1;
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(pos.x == i && pos.y == j && map[i][j] == BLOCKED) continue;
            if(dist[i][j] == 0 && map[i][j] == CAN_GO) {
                dist[i][j] = -1;
            }
        }
    }
    
    printMap(n, m);
}

int main() {
    int n, m;
    Position finish;

    scanf("%d %d", &n, &m);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &map[i][j]);

            if(map[i][j] == FINISH) {
                finish.x = i;
                finish.y = j;
            }
        }
    }

    bfs(finish, n, m);

    return 0;
}