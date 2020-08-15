#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

int main() {
	int num, n, m, cnt;

	scanf("%d", &n);
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &v[i]);
	}
	sort(v.begin(), v.end());

	cin >> m;
	for (int i = 0; i < m; i++) {
		scanf("%d", &num);
		cnt = upper_bound(v.begin(), v.end(), num) - lower_bound(v.begin(), v.end(), num);
		cout << cnt << " ";
	}
}