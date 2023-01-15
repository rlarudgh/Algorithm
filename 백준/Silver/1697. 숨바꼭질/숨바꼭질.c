#include<stdio.h>
#include<stdlib.h>

#define min(a, b) (a < b ? a : b)
#define MAX_SIZE 100001
#define true 1
#define false 0

int visited[MAX_SIZE] = {0,};

typedef struct Node {
    int data;
    struct Node *link; 
}Node;

typedef struct Queue {
    Node* front;
    Node* rear;
    int cnt;
}Queue;

int isEmpty(Queue* queue) {
    return queue->cnt == 0;
}

void initialization(Queue* queue) {
    queue->front =  NULL;
    queue->rear = NULL; 
    queue->cnt = 0;
}

void initQueue(Queue* queue, int data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->link = NULL;
    if(isEmpty(queue)) {
        queue->front = newNode;
    } else { 
        queue->rear->link = newNode;
    }
    queue->rear = newNode;
    queue->cnt++;
}

int deleteQueue(Queue* queue) { 
   int data = queue->front->data;
   if(isEmpty(queue)) return 0;
   Node* ptr;
   ptr = queue->front;
   queue->front = ptr->link;
   free(ptr);
   queue->cnt--;
   return data;
}

void bfs(int n, int k) {
    Queue queue;
    initialization(&queue);
    initQueue(&queue, n);
    while(!isEmpty(&queue)) {
        int front = deleteQueue(&queue);
        int doing = 3;
        if(k == front) break;
        for(int i = 0; i < doing; i++) {
            int n = i == 0 ? front + 1 : i == 1 ? front - 1 : front * 2;
            if(n >= 0 && n < MAX_SIZE && visited[n] == false) {
                visited[n] = visited[front] + 1;
                initQueue(&queue, n);
            }
        }
    }
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    visited[n] = true;
    bfs(n, k);
    printf("%d\n", visited[k] - 1);
}