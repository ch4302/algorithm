#include <iostream>
using namespace std;

int main() {
	int E, S, M, e = 1, s = 1, m = 1;
	int cnt = 1;
	cin >> E >> S >> M;

	while (true) {
		if (e == 16) e = 1;
		if (s == 29) s = 1;
		if (m == 20) m = 1;

		if (E == e && S == s && M == m) break;

		e++;	s++;	m++;
		cnt++;
	}
	cout << cnt;
}