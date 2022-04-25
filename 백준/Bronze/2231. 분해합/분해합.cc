#include<iostream>
using namespace std;
int main(){
	int n;
	int temp;
	int str = 0;
	int sum = 0;
	int g=0;
	cin >> n;
	temp = n;
	while(temp>0){
		temp/=10;
		str++;
	}
	temp = temp - str * 9;
	if(temp < 0) temp = 0;
	int num;
	for(int i = temp;i<=n;i++){
		num = i;
		sum+=num;
		while(num>0){
			sum+= num%10;
			num /= 10;
		}
		if(sum==n){
			g=i;
			break;
		}
		sum = 0;
	}
	cout << g << endl;
	return 0;
}