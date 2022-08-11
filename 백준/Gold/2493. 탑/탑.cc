#include<iostream>
#include<stack>
using namespace std;

#define MAX_VALUE 100000001
#define gongback " "

typedef struct{
    int index, value;
}ss;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k, maxValue = MAX_VALUE;
    cin >> n;
    stack<pair<int, int>> s;
    s.push({maxValue, 0});
    for(int i = 1;i <= n;i++) {
        cin >> k;
        while(s.top().first < k) {
            s.pop();
        }
        cout << s.top().second << gongback;
        s.push({k, i});
    }
    return 0;
}