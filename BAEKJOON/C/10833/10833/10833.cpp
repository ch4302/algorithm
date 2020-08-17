#include <iostream>
using namespace std;

int main() {
	int n, a, b, sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		while (b / a > 0) {
			b -= a;
		}
		sum += b;
	}
	cout << sum;
}