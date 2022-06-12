#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool compare(string a, string b) {
  if(a.length() == b.length()) {
      for(int i = 0; i < a.length(); i++){
          if(a[i] != b[i]) return a[i] < b[i];
      }
  }
  return a.length()<b.length();
}

int main() {
  int n;
  string str;
  cin >> n;
  vector<string> v;
  for(int i = 0; i < n; i++){
    cin >> str;
    v.push_back(str);
  }
  stable_sort(begin(v), end(v), compare);
  cout << v[0] << "\n";
  for(int i = 1; i < n; i++){
    if(v[i-1] != v[i]) cout << v[i] << '\n';
  }
  return 0;
}