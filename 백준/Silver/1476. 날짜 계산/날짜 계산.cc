// 1476 Baekjoon
#include<iostream>
using namespace std;

int main(){
    int e, s, m, y = 1;
    cin >> e >> s >> m;
    while(true){
        if((y - e) % 15 == 0 && (y - s) % 28 == 0 && (y - m) % 19 == 0) break;
        else {
            y++;
        }
    }
    cout << y << '\n';
    return 0;
}

// input
// 1 16 16
// output
// 16