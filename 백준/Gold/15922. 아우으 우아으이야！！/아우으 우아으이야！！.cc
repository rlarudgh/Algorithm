#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
#include<vector>
using namespace std;

#define max(a, b)((a) > (b) ? a : b)

typedef struct{
    int a, b;
}Pair;

int main(){
    int n, result = 0, q, w;
    scanf("%d", &n);
    vector<pair<int, int>> p;
    for(int i = 0; i < n; i++) {
        scanf("%d %d", &q, &w);
        p.push_back({q, w});
    }
    sort(p.begin(), p.end());
    int first = p[0].first, end = p[0].second;
    for(int i = 1 ; i < n ; i++) {
        int a = p[i].first, b = p[i].second;
        end > a ? end = max(end, b) : (result += end - first, first = a, end = b);
    }
    result += (end - first);
    printf("%d\n", result);
    return 0;
}