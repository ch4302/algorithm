#include <iostream>
using namespace std;

int main() {
	int n, a, b, arr[17][17];
	int cnt = 1;
	cin >> n;
	
	for (int i = 0; i < 17; i++) {
		arr[i][0] = 1;
		arr[0][i] = cnt;
		cnt++;
	}

	for (int i = 1; i < 17; i++) {
		for (int j = 1; j < 17; j++) {
			arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
		}
	}

	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		cout << arr[a][b - 1] << '\n';
	}
}