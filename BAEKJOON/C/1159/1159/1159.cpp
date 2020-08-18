#include <iostream>
using namespace std;

int main() {
	int n, alpha[26] = { 0, };
	bool flag = true;
	string p;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> p;
		alpha[p[0] - 97]++;
	}
	for (int i = 0; i < 26; i++) {
		if (alpha[i] >= 5) {
			printf("%c", 97 + i);
			flag = false;
		}
	}
	if (flag) cout << "PREDAJA";
}