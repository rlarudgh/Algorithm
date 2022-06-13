#include<iostream>
#include<queue>

#define MAX 500000

using namespace std;

queue<int> q; // 1234 -> 234 -> 342 -> 42 -> 24 -> 4

int main(){
  int n;
  bool t = true;
  cin >> n;
  int card[n];
  for(int i = 0; i < n; i++){
    card[i] = i+1;
    q.push(card[i]);
  }
  while(q.size() != 1){
    int temp;
    if(t){
      q.pop();
      t = !t; // true -> false | false -> true
    } else{
      temp = q.front();
      q.pop();
      q.push(temp); 
      t = !t;
    }
  }
  cout << q.front() << '\n';
  return 0;
}