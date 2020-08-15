#include <iostream>
using namespace std;

int num[10000001];

int main()
{	
	int n, m, find_num, temp;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		num[temp] = 1;
	}

	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> temp;
		cout << num[temp] << " ";
	}
}