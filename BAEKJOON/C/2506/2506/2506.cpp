#include <iostream>
using namespace std;

int main() {
	int n, flag = 0, cnt = 0, sum = 0;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> flag;
		if (flag) cnt++;
		else cnt = 0;
		sum += cnt;
	}
	cout << sum;
}