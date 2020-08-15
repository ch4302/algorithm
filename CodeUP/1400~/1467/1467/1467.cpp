#include <iostream>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = n - 1; i >= 0; i--) {
		for (int j = 0; j < m; j++) {
			cout << n * m - (i + j * n) << " ";
		}
		cout << '\n';
	}
}