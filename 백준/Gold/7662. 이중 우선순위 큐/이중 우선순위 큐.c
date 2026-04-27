#include <stdio.h>

typedef struct { 
    int v, id;
} Node;

Node minH[1000001], maxH[1000001];

int vis[1000001], minS, maxS;

void pushMin(Node n) {
    int i = ++minS;
    
    while (i > 1 && n.v < minH[i/2].v) { 
        minH[i] = minH[i/2]; i /= 2;
    }
    
    minH[i] = n;
}

void pushMax(Node n) {
    int i = ++maxS;
    
    while (i > 1 && n.v > maxH[i/2].v) {
        maxH[i] = maxH[i/2]; i /= 2;
    }
    
    maxH[i] = n;
}
void popMin() {
    Node t = minH[minS--];
    
    int p = 1, c = 2;
    
    while (c <= minS) {
        if (c < minS && minH[c].v > minH[c+1].v) 
            c++;
        if (t.v <= minH[c].v) 
            break;
        
        minH[p] = minH[c]; 
        p = c; 
        c *= 2;
    }
    
    minH[p] = t;
}
void popMax() {
    Node t = maxH[maxS--];
    int p = 1, c = 2;
    while (c <= maxS) {
        if (c < maxS && maxH[c].v < maxH[c+1].v) 
            c++;
        if (t.v >= maxH[c].v) 
            break;
        
        maxH[p] = maxH[c]; 
        p = c; 
        c *= 2;
    }
    
    maxH[p] = t;
}

int main() {
    int t, k, n;
    char c;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &k);
        minS = maxS = 0;
        
        // 중요: vis 배열 초기화 (k만큼만 초기화해도 충분함)
        for(int i = 0; i <= k; i++) vis[i] = 0;

        for (int i = 0; i < k; i++) {
            // " %c"로 앞에 공백을 넣어 엔터 문자를 방지
            scanf(" %c %d", &c, &n);
            
            if (c == 'I') {
                Node newNode = {n, i};
                pushMin(newNode); pushMax(newNode);
                vis[i] = 1;
            } else {
                if (n == 1) {
                    while (maxS > 0 && !vis[maxH[1].id]) popMax();
                    if (maxS > 0) {
                        vis[maxH[1].id] = 0;
                        popMax();
                    }
                } else {
                    while (minS > 0 && !vis[minH[1].id]) popMin();
                    if (minS > 0) {
                        vis[minH[1].id] = 0;
                        popMin();
                    }
                }
            }
        }
        // 최종 출력 전 쓰레기 값 정리
        while (maxS > 0 && !vis[maxH[1].id]) popMax();
        while (minS > 0 && !vis[minH[1].id]) popMin();

        if (maxS == 0) printf("EMPTY\n");
        else printf("%d %d\n", maxH[1].v, minH[1].v);
    }
    return 0;
}