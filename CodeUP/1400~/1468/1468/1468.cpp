#include <iostream>
using namespace std;

int main()
{
	int n, cnt = 1;
	cin >> n;
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			for (int j = 1; j <= n; j++) {
				cout << cnt++ << " ";
			}
		}
		else {
			for (int j = n; j >= 1; j--) {
				cout << --cnt << " ";
			}
		}
		cout << '\n';
		cnt += n;
	}
}