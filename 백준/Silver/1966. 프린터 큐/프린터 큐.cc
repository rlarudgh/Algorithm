#include<iostream>

#define ture 1
#define false 0

using namespace std;

int main(){
  int n, a, b, arr[101], max = 0, front = 0, cnt;
  cin >> n;
  for(int i = 0; i < n; i++){
    cnt = 1;
    max = 0;
    front = 0;
    cin >> a >> b;
    for(int j = 0; j < a; j++) cin >> arr[j];
    while(true){
      max = 0;
      for(int j = 0; j < a; j++) if(arr[j] > max) max = arr[j];
      while(arr[front] != max) front = (front + 1) % a;
      if(front == b) break;
      arr[front] = 0;
      front = (front + 1) % a;
      cnt++;
    }
    cout << cnt << "\n";
  }
  return 0;
}