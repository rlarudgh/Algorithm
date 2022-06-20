#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
  int n, m;
  cin >> n;
  vector<int> v(n);
  for(int i = 0; i < n; i++){
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  cin >> m;
  vector<int> answer(m);
  for (int i = 0; i < m; i++) {
        int temp = 0;
        cin >> temp;
        auto upper = upper_bound(v.begin(), v.end(), temp);
        auto lower = lower_bound(v.begin(), v.end(), temp);
        answer[i] = upper - lower;
  }
  for(int a : answer){
      cout << a << " ";
  }
  return 0;
}