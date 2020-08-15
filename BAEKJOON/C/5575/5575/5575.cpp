#include <iostream>
using namespace std;

void time(int* arr) {
	int t[3];
	if (arr[5] - arr[2] < 0) {
		arr[5] += 60;
		arr[4] -= 1;
	}
	t[2] = arr[5] - arr[2];

	if (arr[4] - arr[1] < 0) {
		arr[4] += 60;
		arr[3] -= 1;
	}
	t[1] = arr[4] - arr[1];
	t[0] = arr[3] - arr[0];
	
	for (int i = 0; i < 3; i++) {
		cout << t[i] << " ";
	}
	cout << '\n';
}

int main() {
	int a[6], b[6], c[6];
	for (int i = 0; i < 6; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < 6; i++) {
		cin >> b[i];
	}
	for (int i = 0; i < 6; i++) {
		cin >> c[i];
	}
	time(a);
	time(b);
	time(c);
}