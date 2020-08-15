#include <iostream>
using namespace std;

int main() {
	int h, m, s;
	int add;
	cin >> h >> m >> s;
	cin >> add;
	s += add;
	while (s >= 60) {
		m += 1;
		s -= 60;
	}
	while (m >= 60) {
		m -= 60;
		h += 1;
	}
	while (h >= 24) {
		h -= 24;
	}
	cout << h << " " << m << " " << s;
}