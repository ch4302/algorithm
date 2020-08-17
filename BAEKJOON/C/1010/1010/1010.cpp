#include <iostream>
using namespace std;

long long fact(long long n) {
	if (n <= 1) return 1;
	return n * fact(n - 1);
}

int main() {
	long long n, m;
	long long x, y;
	int ite;
	cin >> ite;
	for (int i = 0; i < ite; i++) {
		long long sum = 1;
		cin >> n >> m;
		x = n > abs(m - n) ? n : abs(m - n);
		y = n < abs(m - n) ? n : abs(m - n);
		for (int j = m; j > x; j--) {
			sum *= j;
		}
		cout << sum / fact(y) << '\n';
	}
}