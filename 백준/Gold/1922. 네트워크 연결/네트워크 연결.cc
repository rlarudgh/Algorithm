#include<stdio.h>
#include<stdlib.h>

#define MAX_SIZE 1000
#define true 1
#define false 0

typedef struct{
    int a, b, cost;
}Edge;

int parent[MAX_SIZE] = {0,};

int compare(const void* a, const void* b) {
    Edge* e1 = (Edge*)a;
    Edge* e2 = (Edge*)b;

    return e1->cost > e2->cost;
}

int find(int x) {
    return parent[x] == x ? x : parent[x] = find(parent[x]);
}

int unionFind(int x, int y) {
    const int rootX = find(x);
    const int rootY = find(y);

    if(rootX == rootY) return false;

    parent[rootY] = rootX;
    return true;
}

int main(){
    int n, m, cost = 0;

    scanf("%d %d", &n, &m);

    Edge *edges = (Edge *)malloc(sizeof(Edge) * m);

    for(int i = 0; i < m; i++) {
        scanf("%d %d %d", &edges[i].a, &edges[i].b, &edges[i].cost);
    }

    qsort(edges, m, sizeof(Edge), compare);

    for(int i = 0; i <= n; i++) {
        parent[i] = i;
    }

    for(int i = 0; i < m; i++) {
        if(unionFind(edges[i].a, edges[i].b)) cost += edges[i].cost;
    }

    printf("%d\n", cost);

    return 0;
}