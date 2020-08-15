#include <iostream>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			if ((i == 1 && j == 1) || (i == 1 && j == n) || (i == m && j == 1) || (i == m && j == n)) cout << "+";
			else if (i == 1 || i == m) cout << "-";
			else if (j == 1 || j == n) cout << "|";
			else cout << " ";
		}
		cout << endl;
	}
}