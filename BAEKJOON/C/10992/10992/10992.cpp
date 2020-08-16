#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	for (int i = 1; i <= n - 1; i++) {
		cout << " ";
	}
	cout << "*" << '\n';
	
	if (n > 1) {
		for (int i = 2; i <= n - 1; i++) {
			for (int j = n; j > i; j--) {
				cout << " ";
			}
			cout << "*";
			for (int j = 1; j <= 2 * i - 3; j++) {
				cout << " ";
			}
			cout << "*";
			cout << "\n";
		}

		for (int i = 1; i <= 2 * n - 1; i++) {
			cout << "*";
		}
	}
}