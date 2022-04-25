#include<iostream>
using namespace std;
int main(){
	int n[9];
	int str = 0;
	int max = -1;
	int min = 100;
	for(int i = 0;i<9;i++) {
		cin >> n[i];
		if(n[i]>max) max = n[i];
	}
	for(int i = 0;i<9;i++) {
		str++;
		if(n[i] == max) break;
	}
	cout << max << endl;
	cout << str << endl;
}