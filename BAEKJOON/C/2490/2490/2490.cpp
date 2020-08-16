#include <iostream>
using namespace std;

int main() {
	int a[4];
	for (int i = 1; i <= 3; i++) {
		int cnt_0 = 0;
		for (int j = 0; j < 4; j++) {
			cin >> a[j];
			if (a[j] == 0) cnt_0++;
		}
		if (cnt_0 == 1) cout << 'A' << '\n';
		else if (cnt_0 == 2) cout << 'B' << '\n';
		else if (cnt_0 == 3) cout << 'C' << '\n';
		else if (cnt_0 == 4) cout << 'D' << '\n';
		else cout << 'E' << '\n';
	}
}