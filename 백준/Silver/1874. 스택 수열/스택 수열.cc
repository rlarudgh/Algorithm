#include<stdio.h>
#include<stack>
#include<queue>

using namespace std;

int main(){
    int n, check = 1;
    queue<int> q;
    stack<int> s;
    queue<char> str;
    int strlen = 0, l = 1;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int temp;
        scanf("%d", &temp);
        q.push(temp);
    }
    while(q.size()){
        if(s.size() && s.top() == q.front()){
            s.pop();
            q.pop();
            str.push('-');
        } else if(l <= q.front()){
            while(l <= q.front()){
                s.push(l++);
                str.push('+');
            }
        } else{
            printf("NO\n");
            check = 0;
            break;
        }
    }
    if(check == 1){
        while(str.size()) printf("%c\n", str.front()), str.pop();
    }
    return 0;
}