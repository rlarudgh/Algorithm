// 백준 1976 
#include<stdio.h>
#include<stdlib.h>

#define true 1
#define false 0

int *parent;

int find(int index) {
    if (parent[index] == index) {
        return index;
    }
    return parent[index] = find(parent[index]);
}

void unionFind(int x, int y){
    int rootX = find(x);
    int rootY = find(y);

    if(rootX == rootY) return;

    parent[rootX] = rootY;
}

void setParent(int n) {
    for(int i = 0; i < n; i++) {
        parent[i] = i;
    }
}

int main() {
    int n, m, possiable = true, data;
    
    scanf("%d", &n);

    parent = (int*)malloc(sizeof(int) * n);

    setParent(n);

    scanf("%d", &m);

    int *plan = (int*)malloc(sizeof(int) * m);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &data);
            
            if(data) {
                unionFind(i, j);
            }
        }
    }

    for(int i = 0; i < m; i++) {
        scanf("%d", &plan[i]);
    }

    plan[0] = find(plan[0] - 1);

    for(int i = 1; i < m; i++) {
        plan[i] = find(plan[i] - 1);

        if(plan[i] != plan[i - 1]) {
            possiable = false;
            break;
        }
    }

    printf(possiable ? "YES" : "NO");

    return 0;
}