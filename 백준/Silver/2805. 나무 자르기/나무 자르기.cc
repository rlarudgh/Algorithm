#include<iostream>
#include<algorithm>

#define HIGH_MAX 1000000000

using namespace std;

int main(){
  int n, m;
  cin >> n >> m;
  long long *arr = new long long[n];
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }
  sort(arr, arr+n);
  long long right = HIGH_MAX, left = 0, middle, cutTree, answer = 0;
  while(left <= right){
    middle = (left + right) / 2;
    cutTree = 0;
    for (int i = 0; i < n; i++){ 
            if(arr[i] > middle) cutTree += (arr[i] - middle);
    }
    if(cutTree == m){
      answer = middle;
      break;
    } else if (cutTree > m){
      if(answer < middle){
        answer = middle;
      } 
      left = middle + 1;
    } else if(cutTree < m){
      right = middle - 1;
    }
  }
  cout << answer << '\n';
  delete [] arr;
  return 0;
}