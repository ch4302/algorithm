#include <iostream>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = n; i >= 1; i--) {
		for (int j = m - 1; j >= 0; j--) {
			cout << (i * m) - j << " ";
		}
		cout << '\n';
	}
}