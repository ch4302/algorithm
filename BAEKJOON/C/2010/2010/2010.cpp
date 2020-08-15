#include <iostream>
using namespace std;

int main() {
	int n, t;
	int sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> t;
		sum += (t - 1);
	}
	sum++;
	cout << sum;
}