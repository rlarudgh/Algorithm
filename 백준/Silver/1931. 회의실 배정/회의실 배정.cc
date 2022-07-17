#include<stdio.h>
#include<stdlib.h>
#include<algorithm>

using namespace std;

typedef struct{
    int x, y;
} Point;

#define MAX 100001
#define true 1
#define false 0

int compare(Point const &a, Point const &b){ return a.y == b.y ? a.x < b.x : a.y < b.y; }

int main(){
    int n, a, b, cnt = 0, index = 0;
    scanf("%d", &n);
    Point *p = (Point*)malloc(sizeof(Point) * n);
    for(int i = 0; i < n; i++) scanf("%d %d", &p[i].x, &p[i].y);
    sort(p, p + n, compare);
    for(int i = 0; i < n; i++){
        if(i == 0){
            cnt++;
            index = p[i].y;
        } else if(p[i].x >= index){
            cnt++;
            index = p[i].y;
        }
    }
    printf("%d\n", cnt);
    return 0;
}
/*
11
1 4
3 5
0 6
5 7
3 8
5 9
6 10
8 11
8 12
2 13
12 14
*/