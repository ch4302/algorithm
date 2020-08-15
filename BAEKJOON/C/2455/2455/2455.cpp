#include <iostream>
using namespace std;

int main() {
	int max = -1;
	int sum = 0;
	int in = 0, out = 0;
	while (true) {
		cin >> out >> in;
		sum = sum - out + in;
		if (sum > max) {
			max = sum;
		}
		if (in == 0) break;
	}
	cout << max;
}