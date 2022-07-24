#include <iostream>
#include <stack>

using namespace std;

int alphaarr[26];
stack <double> st;

double compare(double num1, double num2, char op) {
	if (op == '+')
		return num1 + num2;
	else if (op == '-')
		return num1 - num2;
	else if (op == '*')
		return num1 * num2;
	else if (op == '/')
		return num1 / num2;
}

int main() {
	int n;
    string str;
	cin >> n;
	cin >> str;
	for (int i = 0; i < n; i++) cin >> alphaarr[i];
	int len = str.length();
	double num1, num2;
	for (int i = 0; i < len; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') st.push((double)alphaarr[str[i] - 'A']);
		else {
			num2 = st.top();
			st.pop();
			num1 = st.top();
			st.pop();
			st.push(compare(num1, num2, str[i]));
		}
	}
	printf("%.2f", st.top());
    return 0;
}