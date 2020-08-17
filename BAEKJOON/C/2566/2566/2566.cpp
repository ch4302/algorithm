#include <iostream>
using namespace std;

int main() {
	int temp, max = -1, x, y;
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			cin >> temp;
			if (max < temp) {
				max = temp;
				x = i, y = j;
			}
		}
	}
	cout << max << '\n' << x << " " << y;
}