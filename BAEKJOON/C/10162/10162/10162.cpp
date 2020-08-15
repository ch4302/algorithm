#include <iostream>
using namespace std;
int main() {
	int n;
	int min_5 = 0, min_1 = 0, sec_10 = 0;
	cin >> n;

	
	if (n % 10 != 0) {
		cout << -1;
		return 0;
	}
	while (n / 300 > 0) {
		n -= 300;
		min_5 += 1;
	}
	while (n / 60 > 0) {
		n -= 60;
		min_1 += 1;
	}
	while (n / 10 > 0) {
		n -= 10;
		sec_10 += 1;
	}
	cout << min_5 << " " << min_1 << " " << sec_10;
}