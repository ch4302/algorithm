#include <iostream>
using namespace std;

int main()
{
	int n, cnt = 1;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (j % 2 == 1) cout << i + (j - 1) * n << " ";
			else cout << j * n - (i - 1) << " ";
		}
		cout << endl;
	}
}