#include<iostream>

#define true 1
#define false 0

using namespace std;

string S, T;
int boolean = false;

string reverse(string s){
  for(int i = 0; i < s.length() / 2; i++){
    char temp = s[i];
    s[i] = s[s.length() - 1 - i];
    s[s.length() - 1 - i] = temp;
  }
  return s;
}

void make(string str){
  if(str.length() < S.length()) return;
  if(str == S) {
    boolean = true;
    return;
  }
  if(str.back() == 'A'){
    str.pop_back();
    make(str);
  } else{
    str.pop_back();
    make(reverse(str));
  }
}

int main(){
  cin >> S >> T;
  make(T);
  cout << boolean << "\n";
}