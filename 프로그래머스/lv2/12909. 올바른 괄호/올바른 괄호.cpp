#include<string>
#include <iostream>
#include<stack>

using namespace std;

bool solution(string s){
    int cnt = 0;
    for(int i = 0; i < s.length(); i++){
        cnt = s[i] == '(' ? cnt + 1 : cnt - 1;
        if(cnt < 0) return false;
    }
    return cnt == 0;
}