#include <iostream>
using namespace std;

int main() {
	int cnt = 0, sum = 0, temp, min = 9999;

	for (int i = 1; i <= 7; i++) {
		cin >> temp;
		if (temp % 2 == 1) {
			sum += temp;
			cnt++;
			if (min > temp) min = temp;
		}
	}
	if (cnt == 0) {
		cout << -1;
		return 0;
	}
	else {
		cout << sum << "\n" << min;
	}
}