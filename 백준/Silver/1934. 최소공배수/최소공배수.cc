#include<iostream>
using namespace std;
int main(){
	int n;
	int a, b;
	int arr[1000];
	int mok, nmg, big, small;
	int gcm, lcm;
	cin >> n;
	for(int i = 0;i<n;i++){
		cin >> a >> b;	
		if(a>=b){
			big = a;
			small = b;
		}
		else{
			small = a;
			big = b;
		}
		while(1){
			mok = big/small;
			nmg = big-mok*small;
			if(nmg==0){
				gcm = small;
				lcm = a*b  / gcm;
				arr[i] = lcm;
				break;
			}
			big = small;
			small = nmg;
		}
	}
	for(int i = 0;i<n;i++) cout << arr[i] << endl;
	return 0;
}