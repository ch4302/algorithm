#include <iostream>
using namespace std;

int main()
{
	int a, b, sum = 0;
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		if (i % 2 == 0) {
			cout << "-" << i;
			sum -= i;
		}
		else {
			if (a == i) {
				cout << i;
				sum += i;
			}
			else {
				cout << "+" << i;
				sum += i;
			}
		}
	}
	if (sum >= 0) {
		cout << "=+" << sum;
	}
	else {
		cout << "=" << sum;
	}
}