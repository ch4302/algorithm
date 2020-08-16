#include <iostream>
using namespace std;

int main() {
	int a[4];
	int sum, max = -1, idx;

	for (int i = 0; i < 5; i++) {
		sum = 0;
		for (int j = 0; j < 4; j++) {
			cin >> a[j];
			sum += a[j];
		}
		if (sum > max) {
			max = sum;
			idx = i + 1;
		}
	}
	cout << idx << " " << max;
}