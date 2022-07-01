#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

bool compare(int a, int b){
  return b < a;
}

int main(){
  string s, str;
  cin >> s;
  char *a = new char[s.length()];
  for(int i = 0; i < s.length(); i++){
    a[i] = s[i];
  }
  sort(a, a+s.length(), compare);
  for(int i = 0; i <s.length(); i++){
    str[i] = a[i];
  }
  for(int i = 0; i < s.length(); i++) cout << str[i];
  return 0;
}