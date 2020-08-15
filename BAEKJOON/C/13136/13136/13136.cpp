#include <iostream>
using namespace std;

int main() {
	long long r, c, n, r_s, c_s;
	cin >> r >> c >> n;
	if (r % n != 0) {
		r_s = r / n + 1;
	}
	else r_s = r / n;

	if (c % n != 0) {
		c_s = c / n + 1;
	}
	else c_s = c / n;

	cout << r_s * c_s;
}