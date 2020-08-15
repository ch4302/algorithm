#include <iostream>
using namespace std;

int main()
{
	int n, m, cnt;
	cin >> n >> m;
	cnt = n * m;
	for (int i = n; i >= 1; i--) {
		for (int j = 0; j < m; j++) {
			cout << cnt - (n * j) << " ";
		}
		cnt--;
		cout << '\n';
	}
}