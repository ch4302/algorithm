#include <iostream>
using namespace std;

int main()
{
	int n, m;
	int num[100][100];
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> num[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << num[i][j] << " ";
		}
		cout << endl;
	}
}