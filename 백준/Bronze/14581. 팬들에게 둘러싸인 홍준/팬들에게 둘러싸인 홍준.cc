#include <iostream>
using namespace std;

int main() {
	string str;
	cin >> str;

	string fan = ":fan:";

	cout << fan << fan << fan<< "\n";
	cout << fan << ":" << str << ":" << fan << "\n";
	cout << fan << fan << fan;
    return 0;
}