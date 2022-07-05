#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> v(n);
  vector<int> ve(n);
  for(int i = 0; i < n; i++){
    cin >> v[i];
    ve[i] = v[i];
  }
  sort(v.begin(), v.end());
  v.erase(unique(v.begin(), v.end()), v.end());
  for(auto & c: ve){
    cout << lower_bound(v.begin(), v.end(), c) - v.begin() << ' ';
  }
  return 0;
}