#include<iostream>
#include<stdlib.h>

using namespace std;
#define MAX_SIZE 10001

typedef struct{
    int front, end, cost;
} Edge;

int parent[MAX_SIZE] = {0,};
int cost = 0;

int compare(const void *a, const void* b) {
    Edge *front = (Edge *)a;
    Edge *end = (Edge *)b;

    return front->cost > end->cost;
}

int find(int x) {
    return parent[x] == x ? x : parent[x] = find(parent[x]);
}

bool unionFind(int x, int y) {
    const int rootX = find(x);
    const int rootY = find(y);

    if(rootX == rootY) return false;

    parent[rootY] = rootX;
    return true;
}

int main() {
    int vertex, e;

    cin >> vertex >> e;
    
    Edge *arr = (Edge *)malloc(sizeof(Edge) * e);

    for(int i = 0; i < e; i++) {
        cin >> arr[i].front >> arr[i].end >> arr[i].cost;
    }

    qsort(arr, e, sizeof(Edge), compare);
    
    for(int i = 0; i <= vertex; i++) parent[i] = i;

    for(int i = 0; i < e; i++) {
        if(unionFind(arr[i].front, arr[i].end)) cost += arr[i].cost;
    }

    cout << cost << '\n';

    return 0;
}