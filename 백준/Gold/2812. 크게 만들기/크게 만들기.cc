#include<iostream>
#include<stack>

using namespace std;

int main(){
    int n, k, cnt = 0;
    string str;
    cin >> n >> k;
    cin >> str;
    stack<char> s;
    string stack;
    for (int i = 0; i < str.size(); i++) {
        while (!s.empty() && cnt < k && str[i] > s.top()) {
            cnt++;
            s.pop();
        }
        s.push(str[i]);
    }
    while(cnt < k){
        cnt++;
        s.pop();
    }
    int i = 0;
    while(!s.empty()){
        stack.push_back(s.top());
        s.pop();
    }
    for(int i = stack.length() - 1; i >= 0; i--) cout << stack[i];
    cout << '\n';
    return 0;
}