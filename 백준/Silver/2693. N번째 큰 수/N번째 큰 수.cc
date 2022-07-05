#include<iostream>
#include<algorithm>

using namespace std;

#define MAX 10

int main(){
  int t;
  cin >> t;
  int arr[10];
  for(int i = 0; i < t; i++){
    for(int j = 0; j < MAX; j++){
      cin >> arr[j];
    }
    sort(arr, arr+ MAX);
    cout << arr[MAX-3] << '\n';
  }
  return 0;
}