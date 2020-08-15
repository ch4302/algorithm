#include <iostream>
using namespace std;

int main() {
	int n, m, m_s[3], m_b;
	int i = 0;
	cin >> n >> m;
	m_b = m;

	while (m > 0) {
		m_s[i++] = m % 10;
		m /= 10;
	}

	for (int i = 0; i < 3; i++) {
		cout << n * m_s[i] << '\n';
	}
	cout << m_b * n;
}