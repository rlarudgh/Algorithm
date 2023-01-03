#include <iostream>
using namespace std;
#define MAX_SIZE 51

int map[MAX_SIZE][MAX_SIZE] = {0,};
int n, m;

void dfs(int x, int y){
    map[x][y] = 0;

    if (x + 1 < n && map[x + 1][y] == 1) dfs(x + 1, y);
    if (x - 1 >= 0 && map[x - 1][y] == 1) dfs(x - 1, y);
    if (y + 1 < m && map[x][y + 1] == 1) dfs(x, y + 1);
    if (y - 1 >= 0 && map[x][y - 1] == 1) dfs(x, y - 1);
}

int main() {
    int t, k, x, y;

    cin >> t;

    for (int i = 0; i < t; i++){
        int cnt = 0;

        cin >> n >> m >> k;

        for (int j = 0; j < k; j++) {
            cin >> x >> y;
            map[x][y] = 1;
        }

        for (int j = 0; j < n; j++) {
            for (int l = 0; l < m; l++) {
                if (map[j][l] == 1) {
                    dfs(j, l);
                    cnt += 1;
                }
            }
        }

        cout << cnt << '\n';
    }
    return 0;
}