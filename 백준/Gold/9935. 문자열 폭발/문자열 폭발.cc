#include<iostream>
using namespace std;

int main(){
    string str, bomb, result = "";
    cin >> str >> bomb;
    int idx = bomb.length() - 1;
    for(int i = 0 ; i < str.length(); i++){
        result += str[i];
        if(result[result.length() - 1] == bomb[idx] && result.length() >= bomb.length()){
            int cnt = 1;
            for(int j = idx - 1; j >= 0; j--){
                if(result[result.length() - (idx - j) - 1] == bomb[j]){
                        cnt++;
                }
            }
            if(bomb.length() == cnt){
                for(int j = 0; j < bomb.length(); j++){
                    result.pop_back();
                }
            }
        }
    }
    result.length() > 0 ? cout << result << '\n' : cout << "FRULA\n";
    return 0;
}
/*
mirkovC4nizCC44
C4
*/