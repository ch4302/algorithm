#include <iostream>
using namespace std;

int main() {
	int n, sum = 0;
	cin >> n;
	while (n > 0) {
		if (n % 10 == 0) {
			sum += 10;
			n /= 100;
		}
		else {
			sum += n % 10;
			n /= 10;
		}
	}
	cout << sum;
}