#include <iostream>
using namespace std;

int main() {
	int h[3] = { 11, 11, 11 };
	int h_i[3];
	int s[3];
	for (int i = 0; i < 3; i++) {
		cin >> h_i[i];
	}

	if (h_i[2] - h[2] < 0) {
		h[2] += 60;
		h[1] -= 1;
	}
	s[2] = h_i[2] - h[2];

	if (h_i[1] - h[1] < 0) {
		h[1] += 24;
		h[0] -= 1;
	}
	s[1] = h_i[1] - h[1];
	s[0] = h_i[0] - h[0];

	int res = 1440 * s[0] + 60 * s[1] + s[2];
	if (res >= 0) {
		cout << res;
	}
	else {
		cout << -1;
	}
	
}