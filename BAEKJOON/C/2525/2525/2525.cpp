#include <iostream>
using namespace std;

int main() {
	int h, m;
	int add;
	cin >> h >> m;
	cin >> add;
	m += add;
	while (m >= 60) {
		h += 1;
		m -= 60;
	}
	
	if (h >= 24) h -= 24;
	cout << h << " " << m;
}