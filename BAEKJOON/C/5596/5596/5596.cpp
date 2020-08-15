#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a[4], b[4];
	int a_s = 0, b_s = 0;
	for (int i = 0; i < 4; i++) {
		cin >> a[i];
		a_s += a[i];
	}
	for (int i = 0; i < 4; i++) {
		cin >> b[i];
		b_s += b[i];
	}
	cout << max(a_s, b_s);
}