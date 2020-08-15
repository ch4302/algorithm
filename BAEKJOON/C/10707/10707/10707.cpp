#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int A, B, C, D, P;
	int m_X = 0, m_Y = 0;

	cin >> A >> B >> C >> D >> P;

	m_X = A * P;
	if (P > C) {
		m_Y = B + D * (P - C);
	}
	else {
		m_Y += B;
	}
	cout << min(m_X, m_Y);
}