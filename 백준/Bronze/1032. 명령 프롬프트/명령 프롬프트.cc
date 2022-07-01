#include<iostream>

using namespace std;

int main(){
  int n;
  string answer;
  cin >> n;
  for(int i = 0 ;i < n; i++){
    string s;
    cin >> s;
    if(i == 0) answer = s;
    else {
      for(int j =0 ; j < s.length(); j++){
        if(s[j] != answer[j]) answer[j] = '?';
      }
    }
  }
  cout << answer << '\n';
  return 0;
}