#include <iostream>
using namespace std;

int main() {
	int n, temp;
	int cnt_1 = 0, cnt_0 = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		if (temp) cnt_1++;
		else cnt_0++;
	}
	if (cnt_1 > cnt_0) cout << "Junhee is cute!";
	else cout << "Junhee is not cute!";
}