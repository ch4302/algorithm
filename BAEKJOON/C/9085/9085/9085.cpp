#include <iostream>
using namespace std;

int main() {
	int n, m, temp, sum;
	cin >> n;

	for (int i = 0; i < n; i++) {
		sum = 0;
		cin >> m;
		for (int j = 0; j < m; j++) {
			cin >> temp;
			sum += temp;
		}
		cout << sum << '\n';
	}
}