#include <iostream>
using namespace std;

int main() {
	long n;
	long a, b, last;
	cin >> n;

	for (long i = 0; i < n; i++) {
		cin >> a >> b;

		last = a;
		b = b % 4 + 4;
		for (long j = 2; j <= b; j++) {
			last = (last * a) % 10;
		}

		if (last == 0) last = 10;
		cout << last << '\n';
	}
}