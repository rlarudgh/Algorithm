#include<iostream>
using namespace std;
int main(){
	int arr[5];
	int min = 1;
	for(int i = 0;i<5;i++) cin >> arr[i];
	while(1){
		int cnt = 0;
		for(int i = 0;i<5;i++){
			if(min >=arr[i]&& min%arr[i] ==0) cnt++;
		}
		if(cnt>=3) break;
		min++;
	}
	cout << min;
	return 0;
}