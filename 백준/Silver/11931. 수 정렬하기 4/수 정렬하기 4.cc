#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n, greater<int>());
    for (int i = 0; i < n; i++) cout << arr[i] << '\n';
    return 0;
}