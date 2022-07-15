#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<algorithm>

using namespace std;

vector <int> maps[1001];

void dfs(int v){
    stack <int> s;
    int visited[1001] = {0,};
    s.push(v);
    while(!s.empty()){
        int now = s.top();
        if(visited[now] == 0){
            cout << now << " ";
        }
        visited[now] = 1;
        s.pop();
        for(int i=maps[now].size()-1; i>=0; i--){
            if(visited[maps[now].at(i)] == 0){
                s.push(maps[now].at(i));
            }
        }
    }
}

void bfs(int v){
    queue <int> q;
    int visited[1001] = {0,};
    q.push(v);
    while(!q.empty()){
        int now = q.front();
        if(visited[now] == 0){
            cout << now << " ";
        }
        visited[now] = 1;
        q.pop();
        for(int i=0; i<maps[now].size(); i++){
            if(visited[maps[now].at(i)] == 0){
                q.push(maps[now].at(i));
            }
        }
    }

}

int main(){
    int n,m,v;
    int node1, node2;
    cin >> n >> m >> v;
    for(int i=0; i<m; i++){
        cin >> node1 >> node2;
        maps[node1].push_back(node2);
        maps[node2].push_back(node1);
    }
    for(int i=1; i<n+1; i++){
        sort(maps[i].begin(), maps[i].end());
    }

    dfs(v);
    cout << endl;
    bfs(v);
}