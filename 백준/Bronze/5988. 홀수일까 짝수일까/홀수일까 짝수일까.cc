#include<iostream>

using namespace std;

int main() {
	int n, num;
	string k;
	cin >> n;
	for (int i = 0; i < n; i++) { 
		cin >> k;
		num = (k[k.size() - 1]) - '0';
        num % 2 == 0 ? cout << "even" << '\n' : cout << "odd" << '\n';
	}
	return 0;
}