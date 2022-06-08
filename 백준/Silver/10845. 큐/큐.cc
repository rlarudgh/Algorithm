#include<iostream>
#include<queue>
#include<string.h>
#include<cstring>

using namespace std;

queue<int> q;

int main(){
  string str;
  int n;
  cin >> n;
  for(int i = 0; i < n; i++){
    int data =0;
    cin >> str;
    if (str == "push") {
			cin >> data;
			q.push(data);
		} else if (str == "pop") {
			if (q.empty()) cout << -1 << "\n";
			else {
				cout << q.front() << "\n";
				q.pop();
			}
		} else if (str == "size") {
			cout << q.size() << "\n";
		} else if (str == "empty") {
			cout << q.empty() << "\n";
		} else if (str == "front") {
      int num = q.empty() ? -1 : q.front();
      cout << num << "\n";
		} else if (str == "back") {
      int num = q.empty() ? -1 : q.back();
      cout << num << "\n";
		  } 
  }
  return 0;
}