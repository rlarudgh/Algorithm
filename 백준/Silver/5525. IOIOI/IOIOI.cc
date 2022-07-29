#include<iostream>

using namespace std;

int main(){
    int n, m, result = 0, cnt;
    string str;
    cin >> n;
    cin >> m;
    cin >> str;
    for(int i = 0; i < m; i++){
        cnt = 0;
        if(str[i] != 'O'){
            while(str[i + 1] == 'O' && str[i + 2] == 'I'){
                cnt++;
                if(cnt != n){
                    i += 2;
                    continue;
                } else{
                    result += 1;
                    cnt--;
                    i += 2;
                }
            }
        }
    }
    cout << result << '\n';
    return 0;
}