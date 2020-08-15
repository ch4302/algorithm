#include <iostream>
#include <stack>
using namespace std;

bool check(string str) {
	stack<char> s;
	for (int j = 0; j < str.length(); j++) {
		char c = str[j];

		// ���� ��ȣ�̸� push
		if (c == '(') {
			s.push(str[j]);
		}
		else {
			// ������� ������ pop
			if (!s.empty()) {
				s.pop();
			}
			else {
				return false;
			}
		}
	}
	return s.empty();
}

int main() {
	int n;

	cin >> n;
	string str;

	for (int i = 0; i < n; i++) {
		cin >> str;

		if (check(str)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}