#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int sum = 2;
	int weight = 2;

	for (int i = 1; i < n; i++) {
		sum += weight;
		if (i % 2 == 0) weight += 1;
	}
	cout << sum;
}