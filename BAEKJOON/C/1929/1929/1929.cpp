#include <iostream>
using namespace std;

int main() {
	int n, m;
	bool arr[1000001];
	arr[0] = arr[1] = false;

	cin >> n >> m;

	for (int i = 2; i <= m; i++) {
		arr[i] = true;
	}
	
	for (int i = 2; i * i <= m; i++) {
		if (arr[i]) {
			for (long long j = i * i; j <= m; j += i) {
				arr[j] = false;
			}
		}
	}

	for (int i = n; i <= m; i++) {
		if(arr[i]) cout << i << '\n';
	}
}