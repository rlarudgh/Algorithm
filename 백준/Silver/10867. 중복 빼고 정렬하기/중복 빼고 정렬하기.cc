#include <iostream>

using namespace std;

#define MAX_SIZE 1001
#define abs(n)(n > 0 ? n : (-1 * n))

int main() {
	int n, value;
	bool plus[MAX_SIZE] = {false, }, minus[MAX_SIZE] = {false, };
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> value;
		if (value < 0) minus[abs(value)] = true;
		else plus[value] = true;
	}
	for (int i = MAX_SIZE - 1; i > 0; i--) if (minus[i]) printf("%d ", i * -1);
	for (int i = 0; i < MAX_SIZE; i++) if (plus[i]) printf("%d ", i);
	return 0;
}