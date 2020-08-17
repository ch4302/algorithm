#include <iostream>
using namespace std;

int fib[41];

int fibonacci(int n) {
	if (n == 0) {
		fib[0] = 0;
		return 0;
	}
	else if (n == 1) {
		fib[1] = 1;
		return 1;
	}

	if (fib[n] != 0) return fib[n];
	else return fib[n] = fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
	int n, temp;
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		if (temp == 0) cout << 1 << " " << 0 << '\n';
		else if (temp == 1) cout << 0 << " " << 1 << '\n';
		else {
			fibonacci(temp);
			cout << fib[temp - 1] << " " << fib[temp] << '\n';
		}
	}
}