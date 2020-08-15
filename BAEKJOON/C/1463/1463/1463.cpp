#include <iostream>
using namespace std;

int main() {
	int x, cnt = 0;
	cin >> x;

	while (x != 1) {
		if (x % 3 == 0) {
			x /= 3;
		}
		else if (x % 2 == 0) {
			x /= 2;
		}
		else x -= 1;
		cnt++;
	}
	cout << cnt;
}